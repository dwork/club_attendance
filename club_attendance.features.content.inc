<?php
/**
 * @file
 * club_attendance.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function club_attendance_content_defaults() {
  $content = array();

  $content['Default Attendance Policy'] = (object) array(
    'exported_path' => 'content/attendance-policy',
    'title' => 'Attendance Policy',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'attendance_configuration',
    'language' => 'und',
    'created' => '1349370394',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'Default Attendance Policy',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Attendance Policy here.</p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Attendance Policy here.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
    'field_appendpolicy' => array(
      'und' => array(
        0 => array(
          'value' => 'Yes',
        ),
      ),
    ),
    'field_attendanceadmin' => array(
      'und' => array(
        0 => array(
          'email' => 'dwork@oip.net',
        ),
        1 => array(
          'email' => 'orders@dirtcheapcopies.com',
        ),
      ),
    ),
    'field_attendancerequirement' => array(
      'und' => array(
        0 => array(
          'value' => '50',
        ),
      ),
    ),
    'field_chapter' => array(
      'und' => array(
        0 => array(
          'target_id' => '5',
        ),
      ),
    ),
    'field_makeup_notation' => array(
      'und' => array(
        0 => array(
          'value' => '* Make-ups are not included in attendance totals',
          'format' => NULL,
          'safe_value' => '* Make-ups are not included in attendance totals',
        ),
      ),
    ),
    'field_makeup_policy' => array(
      'und' => array(
        0 => array(
          'value' => 'Manual Update',
        ),
      ),
    ),
    'field_makeupsallowed' => array(
      'und' => array(
        0 => array(
          'value' => 'Yes',
        ),
      ),
    ),
    'field_maximum_consecutive' => array(
      'und' => array(
        0 => array(
          'value' => '5',
        ),
      ),
    ),
    'field_maximum_missed' => array(
      'und' => array(
        0 => array(
          'value' => '13',
        ),
      ),
    ),
    'field_maxmakeups' => array(
      'und' => array(
        0 => array(
          'value' => '8',
        ),
      ),
    ),
    'field_missed_subject' => array(
      'und' => array(
        0 => array(
          'value' => 'We Missed You!',
          'format' => NULL,
          'safe_value' => 'We Missed You!',
        ),
      ),
    ),
    'field_missedyoumessage' => array(
      'und' => array(
        0 => array(
          'value' => 'We missed you at the last meeting. Let us know what\'s up with that???
--
Administrator
Your club',
          'format' => NULL,
          'safe_value' => 'We missed you at the last meeting. Let us know what&#039;s up with that???
--
Administrator
Your club',
        ),
      ),
    ),
    'field_policy_date_range' => array(
      'und' => array(
        0 => array(
          'value' => '2013-01-01 00:00:00',
          'value2' => '2013-12-31 00:00:00',
          'timezone' => 'America/Los_Angeles',
          'timezone_db' => 'America/Los_Angeles',
          'date_type' => 'datetime',
        ),
      ),
    ),
    'field_status' => array(
      'und' => array(
        0 => array(
          'tid' => '2',
        ),
      ),
    ),
    'field_test' => array(
      'und' => array(
        0 => array(
          'value' => 'Yes',
        ),
      ),
    ),
    'field_test_email_address' => array(
      'und' => array(
        0 => array(
          'email' => 'dwork@oip.net',
        ),
      ),
    ),
  );

  $content['doc_attendance'] = (object) array(
    'exported_path' => 'content/attendance',
    'title' => 'Attendance',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'documentation',
    'language' => 'und',
    'created' => '1349723318',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'doc_attendance',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Module Requirements</p>
<p class="rteindent1">Views, Rules</p>
<p>The attendance module provide the following features:</p>
<ol>
	<li>
		Set up and change an &quot;Attenance Policy&quot;, which includes definition of the policy, &quot;Make-Up&quot; policy, a &quot;Missed You&quot; message for members who miss meetings, as well as criteria for administrative notifications for frequent absentees;</li>
	<li>
		Ability to enter meeting attendance as a &quot;batch&quot; -- i.e. &nbsp;bring up all members, automatically default to &quot;present&quot;, and allow the club secretary or other administrator to mark those present, absent or excused (&quot;Do Not Count&quot;);</li>
	<li>
		Ability to change previous attendance records. For example, if a members makes up after the fact, the administrator can easily call up the &quot;absent&quot; record and change its status to &quot;make up&quot;.</li>
	<li>
		Ability to define attendance types -- for example, &quot;Absent&quot;, &quot;Present&quot;, &quot;Excused&quot;, &quot;Makeup&quot; and so on.</li>
</ol>
<p>The attendance module provides the following reports:</p>
<ol>
	<li>
		Optional automated email to member when they are absent, with copies to one or more administrators</li>
	<li>
		&quot;Test Mode&quot; to send email to the administrators while setting up the system</li>
	<li>
		Administrative reports showing summary of activity by attendance type</li>
	<li>
		Administrative reports showing details of activity for particular members</li>
</ol>
<p>Make-Up Policy</p>
<p class="rteindent1">Make-ups are handled</p>
<p>&nbsp;</p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Module Requirements<br />
Views, Rules<br />
The attendance module provide the following features:</p>
<ol><li>
		Set up and change an "Attenance Policy", which includes definition of the policy, "Make-Up" policy, a "Missed You" message for members who miss meetings, as well as criteria for administrative notifications for frequent absentees;</li>
<li>
		Ability to enter meeting attendance as a "batch" -- i.e.  bring up all members, automatically default to "present", and allow the club secretary or other administrator to mark those present, absent or excused ("Do Not Count");</li>
<li>
		Ability to change previous attendance records. For example, if a members makes up after the fact, the administrator can easily call up the "absent" record and change its status to "make up".</li>
<li>
		Ability to define attendance types -- for example, "Absent", "Present", "Excused", "Makeup" and so on.</li>
</ol><p>The attendance module provides the following reports:</p>
<ol><li>
		Optional automated email to member when they are absent, with copies to one or more administrators</li>
<li>
		"Test Mode" to send email to the administrators while setting up the system</li>
<li>
		Administrative reports showing summary of activity by attendance type</li>
<li>
		Administrative reports showing details of activity for particular members</li>
</ol><p>Make-Up Policy<br />
Make-ups are handled<br />
 </p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
