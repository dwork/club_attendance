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
    'exported_path' => 'content/attendance-policy-0',
    'title' => 'Attendance Policy',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'attendance_configuration',
    'language' => 'und',
    'created' => '1357671186',
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
          'target_id' => '9',
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

  $content['attendance_documentation'] = (object) array(
    'exported_path' => 'content/attendance-documentation',
    'title' => 'Attendance Documentation',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1358020739',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'attendance_documentation',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<h3>
	<strong>Attendance Process</strong></h3>
<p>The attendance module allows you to capture and report attendance for chapter/club members. Some clubs, like Rotary, have a fixed but flexible attendance requirement. Others, such as Networking groups, have a rigid attendance policy. Still others, such as informal clubs, have no attendance requirement at all.</p>
<p>Attendance is composed of three basic functions:</p>
<ol>
	<li>
		The Attendance Policy</li>
	<li>
		Attendance detail records</li>
	<li>
		Attendance reporting</li>
</ol>
<h3>
	<strong>The Attendance Policy</strong></h3>
<p>The attendance policy is defined using a content type &quot;Attendance Policy&quot;. The policy is used by the system to define how certain functions work, as well as how attendance is grouped for reporting. Once defined, the attendance policy can be &quot;cloned&quot; for future periods or for new chapters.</p>
<ul>
	<li>
		Date Range: The attendance policy includes a &quot;date range&quot;. Generally, this is the period of time for which attendance is tracked and reported. For example, a chapter with ANNUAL requirements should set this date range for one calendar year. A chapter with SEMI-ANNUAL requirements should set the policy for that six month period.</li>
	<li>
		Attendance Policy: this is a description of the chapter&#39;s attendance policy. The policy can be included or excluded from email reminders sent to members when they miss a meeting.</li>
	<li>
		Status Inclusions: this determines which members are included in the automated mass attendance process (see below). For example, if you mark &quot;Active&quot; and &quot;Honorary&quot;, any member marked as Active or Honorary will be included in the mass attendance process. If you mark &quot;Active&quot; only, then only Active members are included.</li>
	<li>
		Attendance Requirement (%): this field contains the percentage of total meetings required to maintain active member status. This is used for management reporting only. Leave this field blank if you do not have a required attendance policy or if your attendance policy is a count rather than a percentage.</li>
	<li>
		Makeups: a group of fields that define how you treat &quot;makeups&quot;
		<ul>
			<li>
				Makeups Allowed (Yes or No): determines whether or not makeups are counted as &quot;Present&quot; or not</li>
			<li>
				Maximum Number of Makeups Allowed: the maximum number of makeups allowed during this policy date range</li>
			<li>
				Makeup Policy: the makeup policy itself</li>
			<li>
				Makeup &quot;No Count&quot; annotation: displays on reports if makeups are not allowed</li>
		</ul>
	</li>
	<li>
		Missed Meetings: a group of fields that define how you deal with missed meetings. You can automatically send reminder emails to members who miss meetings.
		<ul>
			<li>
				Missed Meeting Subject: email subject</li>
			<li>
				Missed You message: the actual message and signaturefor the &quot;missed meeting&quot; email</li>
			<li>
				Append Policy (yes or no): determine whether or not the Attendance Policy is included in the &quot;missed meeting&quot; email</li>
			<li>
				Maximum missed meetings: this is a management function. When the number of missed meetings (not made up) exceeds this number, an email will be sent to the &quot;Attendance Admin Email&quot; addresses defined in the policy. If you leave this field blank, this check is not performed.</li>
			<li>
				Maximum consecutive missed meetings: this is also a management function and is reported to the Attendance Admin Emails when the number of consecutive missed meetings is reached.</li>
		</ul>
	</li>
	<li>
		Administration: a group of fields that control how emails are sent and to whom
		<ul>
			<li>
				Attendance Email addresses: one or more email addresses that receive the administrative email messages (missed meetings, etc.)</li>
			<li>
				Test (Yes, No): If &quot;Yes&quot;, ALL attendance email messages are sent to the &quot;Test Email Address&quot;. If &quot;No&quot;, attendance email messages are sent to the member and the administrative email addresses.</li>
		</ul>
	</li>
</ul>
<h3>
	<strong>Attendance Detail Records</strong></h3>
<p>Recording attendance can be done individually or using the &quot;mass attendance process&quot;. Individual recording is appropriate for when makeups or other low-attendance events are being tracked. The &quot;mass attendance process&quot; is useful to quickly record attendance at regular meetings or high-attendance makeups (e.g. socials).</p>
<ol>
	<li>
		Mass Entry<br />
		A. Select the &quot;Mass Entry&quot; option.<br />
		&nbsp; &nbsp; This displays an entry screen.<br />
		&nbsp; &nbsp; &quot;Title&quot; should describe the event (Regular Meeting, Afternoon Social, High School Work Project, etc.).<br />
		&nbsp; &nbsp;You can optionally add an extended description (for example, &quot;Social&quot; can be annotated &quot;Theatre Event&quot;.&nbsp;<br />
		&nbsp; &nbsp;&quot;Type&quot; should define the type of meting -- Regular Meeting and Makeup are probably the only choices you should ever make<br />
		&nbsp; &nbsp;&quot;Meeting/Event Date&quot;: the program defaults to today&#39;s date. Change this date if appropriate.<br />
		B. Save the form<br />
		C. The system will now automatically generate attendance records for each member of your chapter for this date, using the fields from your form. (Note: selected members must have the &quot;status&quot; defined in the Attendance Policy)<br />
		D. The system will then display an editable list of attendance records generated by the form.</li>
</ol>
<p>&nbsp;</p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p><strong>Attendance Process</strong><br />
The attendance module allows you to capture and report attendance for chapter/club members. Some clubs, like Rotary, have a fixed but flexible attendance requirement. Others, such as Networking groups, have a rigid attendance policy. Still others, such as informal clubs, have no attendance requirement at all.<br />
Attendance is composed of three basic functions:</p>
<ol><li>
		The Attendance Policy</li>
<li>
		Attendance detail records</li>
<li>
		Attendance reporting</li>
</ol><p>	<strong>The Attendance Policy</strong><br />
The attendance policy is defined using a content type "Attendance Policy". The policy is used by the system to define how certain functions work, as well as how attendance is grouped for reporting. Once defined, the attendance policy can be "cloned" for future periods or for new chapters.</p>
<ul><li>
		Date Range: The attendance policy includes a "date range". Generally, this is the period of time for which attendance is tracked and reported. For example, a chapter with ANNUAL requirements should set this date range for one calendar year. A chapter with SEMI-ANNUAL requirements should set the policy for that six month period.</li>
<li>
		Attendance Policy: this is a description of the chapter\'s attendance policy. The policy can be included or excluded from email reminders sent to members when they miss a meeting.</li>
<li>
		Status Inclusions: this determines which members are included in the automated mass attendance process (see below). For example, if you mark "Active" and "Honorary", any member marked as Active or Honorary will be included in the mass attendance process. If you mark "Active" only, then only Active members are included.</li>
<li>
		Attendance Requirement (%): this field contains the percentage of total meetings required to maintain active member status. This is used for management reporting only. Leave this field blank if you do not have a required attendance policy or if your attendance policy is a count rather than a percentage.</li>
<li>
		Makeups: a group of fields that define how you treat "makeups"
<ul><li>
				Makeups Allowed (Yes or No): determines whether or not makeups are counted as "Present" or not</li>
<li>
				Maximum Number of Makeups Allowed: the maximum number of makeups allowed during this policy date range</li>
<li>
				Makeup Policy: the makeup policy itself</li>
<li>
				Makeup "No Count" annotation: displays on reports if makeups are not allowed</li>
</ul></li>
<li>
		Missed Meetings: a group of fields that define how you deal with missed meetings. You can automatically send reminder emails to members who miss meetings.
<ul><li>
				Missed Meeting Subject: email subject</li>
<li>
				Missed You message: the actual message and signaturefor the "missed meeting" email</li>
<li>
				Append Policy (yes or no): determine whether or not the Attendance Policy is included in the "missed meeting" email</li>
<li>
				Maximum missed meetings: this is a management function. When the number of missed meetings (not made up) exceeds this number, an email will be sent to the "Attendance Admin Email" addresses defined in the policy. If you leave this field blank, this check is not performed.</li>
<li>
				Maximum consecutive missed meetings: this is also a management function and is reported to the Attendance Admin Emails when the number of consecutive missed meetings is reached.</li>
</ul></li>
<li>
		Administration: a group of fields that control how emails are sent and to whom
<ul><li>
				Attendance Email addresses: one or more email addresses that receive the administrative email messages (missed meetings, etc.)</li>
<li>
				Test (Yes, No): If "Yes", ALL attendance email messages are sent to the "Test Email Address". If "No", attendance email messages are sent to the member and the administrative email addresses.</li>
</ul></li>
</ul><p>	<strong>Attendance Detail Records</strong><br />
Recording attendance can be done individually or using the "mass attendance process". Individual recording is appropriate for when makeups or other low-attendance events are being tracked. The "mass attendance process" is useful to quickly record attendance at regular meetings or high-attendance makeups (e.g. socials).</p>
<ol><li>
		Mass Entry<br />
		A. Select the "Mass Entry" option.<br />
		    This displays an entry screen.<br />
		    "Title" should describe the event (Regular Meeting, Afternoon Social, High School Work Project, etc.).<br />
		   You can optionally add an extended description (for example, "Social" can be annotated "Theatre Event". <br />
		   "Type" should define the type of meting -- Regular Meeting and Makeup are probably the only choices you should ever make<br />
		   "Meeting/Event Date": the program defaults to today\'s date. Change this date if appropriate.<br />
		B. Save the form<br />
		C. The system will now automatically generate attendance records for each member of your chapter for this date, using the fields from your form. (Note: selected members must have the "status" defined in the Attendance Policy)<br />
		D. The system will then display an editable list of attendance records generated by the form.</li>
</ol><p> </p>
',
          'safe_summary' => '',
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
