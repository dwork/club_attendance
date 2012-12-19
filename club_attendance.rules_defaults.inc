<?php
/**
 * @file
 * club_attendance.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function club_attendance_default_rules_configuration() {
  $items = array();
  $items['rules_action_trigger_attendance'] = entity_import('rules_config', '{ "rules_action_trigger_attendance" : {
      "LABEL" : "Action Trigger - Attendance",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "php" ],
      "ON" : [ "node_insert" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "action_trigger_attendance" : "action_trigger_attendance" } }
          }
        }
      ],
      "DO" : [
        { "php_eval" : { "code" : "   global $user;\\r\\n   $user_node = user_load($user-\\u003Euid);     \\/\\/ administrator\\u0027s userid\\r\\n   \\r\\n   $chapter = $node-\\u003Efield_chapter[\\u0027und\\u0027][0][\\u0027target_id\\u0027];\\r\\n\\r\\n   \\/\\/ build $status array\\r\\n   $status=array();\\r\\n   $config = attendance_get_config($chapter);    \\/\\/ get config for status\\u0027 to include, else use ALL if none set\\r\\n   foreach ($config-\\u003Efield_status[\\u0027und\\u0027] as $ary) {\\r\\n      foreach ($ary as $key =\\u003E $value) {\\r\\n         $status[]=$value;\\r\\n      }\\r\\n   }\\r\\n   dsm($status);\\r\\n\\r\\n   $time = time();\\r\\n   $ct=0;\\r\\n   # $date = [node:field_date];\\r\\n\\r\\n   $query = new EntityFieldQuery;\\r\\n   $query\\r\\n      -\\u003EentityCondition(\\u0027entity_type\\u0027, \\u0027user\\u0027)\\r\\n      -\\u003EpropertyCondition(\\u0027status\\u0027, 1)\\r\\n      -\\u003EpropertyCondition(\\u0027uid\\u0027,1,\\u0027\\u003C\\u003E\\u0027);\\r\\n   if (!empty($status)) {\\r\\n      $query-\\u003EfieldCondition(\\u0027field_status\\u0027,\\u0027tid\\u0027,$status,\\u0027IN\\u0027);\\r\\n   }\\r\\n   $query-\\u003EfieldCondition(\\u0027field_chapter\\u0027,\\u0027target_id\\u0027,$chapter,\\u0027=\\u0027);       \\/\\/ Current Chapter\\r\\n   $result = $query-\\u003Eexecute();\\r\\n\\r\\n   if (isset($result[\\u0027user\\u0027])) {\\r\\n     $users = array_keys($result[\\u0027user\\u0027]);\\r\\n     foreach ($users as $uid) {\\r\\n\\r\\n       $nnode = new stdClass();\\r\\n       $nnode-\\u003Etitle = $node-\\u003Etitle;\\r\\n       $nnode-\\u003Ebody = \\u0027\\u0027;\\r\\n       $nnode-\\u003Enid = \\u0027\\u0027;                  \\/\\/ add or update, depending on query for \\u0027nid\\u0027 above^M\\r\\n       $nnode-\\u003Etype = \\u0027attendance\\u0027;   \\/\\/ Your specified content type^M\\r\\n       $nnode-\\u003Ecreated = $time;\\r\\n       $nnode-\\u003Echanged = $time;\\r\\n       $nnode-\\u003Elanguage = \\u0027und\\u0027;\\r\\n       $nnode-\\u003Estatus = 1;\\r\\n       $nnode-\\u003Epromote = 0;\\r\\n       $nnode-\\u003Esticky = 0;\\r\\n       $nnode-\\u003Eformat = 1;       \\/\\/ Filtered HTML^M\\r\\n       $nnode-\\u003Euid = $user-\\u003Euid;\\r\\n       $nnode-\\u003Efield_uid[\\u0027und\\u0027][0][\\u0027target_id\\u0027] = $uid;\\r\\n       $nnode-\\u003Efield_chapter = $node-\\u003Efield_chapter; \\r\\n       $nnode-\\u003Efield_date = $node-\\u003Efield_date;\\r\\n       $nnode-\\u003Efield_attendance = $node-\\u003Efield_attendance;\\r\\n       if (isset($node-\\u003Efield_description[\\u0027und\\u0027][0][\\u0027value\\u0027])) {\\r\\n         $nnode-\\u003Efield_description = $node-\\u003Efield_description;\\r\\n       } else {\\r\\n         $nnode-\\u003Efield_description[\\u0027und\\u0027][0][\\u0027value\\u0027] = \\u0027\\u0027;\\r\\n       }\\r\\n       $nnode = node_submit($nnode);\\r\\n       node_save($nnode);\\r\\n       $ct++;\\r\\n     }\\r\\n   }\\r\\n   $msg = \\u0027Attendance nodes created for \\u0027.$ct.\\u0027 users, chapter: $chapter\\u0027;\\r\\n  watchdog(\\u0027Action Trigger\\u0027, t($msg));" } },
        { "redirect" : { "url" : "attendance-editable?field_date_value%5Bmin%5D%5Byear%5D=\\u003C?php echo substr($node-\\u003Efield_date[\\u0027und\\u0027][0][\\u0027value\\u0027],0,4); ?\\u003E\\u0026field_date_value%5Bmax%5D%5Byear%5D=\\u003C?php echo substr($node-\\u003Efield_date[\\u0027und\\u0027][0][\\u0027value\\u0027],0,4); ?\\u003E\\u0026field_date_value%5Bmin%5D%5Bmonth%5D=\\u003C?php echo ltrim(substr($node-\\u003Efield_date[\\u0027und\\u0027][0][\\u0027value\\u0027],5,2),\\u00270\\u0027); ?\\u003E\\u0026field_date_value%5Bmax%5D%5Bmonth%5D=\\u003C?php echo ltrim(substr($node-\\u003Efield_date[\\u0027und\\u0027][0][\\u0027value\\u0027],5,2),\\u00270\\u0027); ?\\u003E\\u0026field_date_value%5Bmin%5D%5Bday%5D=\\u003C?php echo ltrim(substr($node-\\u003Efield_date[\\u0027und\\u0027][0][\\u0027value\\u0027],8,2),\\u00270\\u0027); ?\\u003E\\u0026field_date_value%5Bmax%5D%5Bday%5D=\\u003C?php echo ltrim(substr($node-\\u003Efield_date[\\u0027und\\u0027][0][\\u0027value\\u0027],8,2),\\u00270\\u0027); ?\\u003E\\r\\n" } }
      ]
    }
  }');
  return $items;
}