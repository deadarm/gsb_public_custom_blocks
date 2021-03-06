<?php

$plugin = array(
  'title' => t('Program Finder'),
  'category' => t('Administrator Blocks'),
  'single' => TRUE,
  'all contexts' => TRUE,
);

/**
 * Implements hook_PLUGIN_content_type_render().
 */
function gsb_public_custom_blocks_program_finder_content_type_render($subtype, $conf, $panel_args, $context, $incoming) {
  $easy_reponsive_tabs_path = libraries_get_path('easyResponsiveTabs');
  drupal_add_js($easy_reponsive_tabs_path . '/easyResponsiveTabs.js');
  drupal_add_js(drupal_get_path('module', 'gsb_public_custom_blocks') . '/js/gsb_public_custom_blocks.js');
  $tabs = array(
    array(
        'title' => 'Full-Time Degree',
        '#markup' => '<a href="/programs/mba">MBA Program</a>
<p>This two-year, full-time general management program transforms the brightest, most passionate people in the world. Develop analytical and creative thinking and build leadership skills in an innovative environment.</p>
<a href="/programs/msx">MSx Program</a>
<p>This one-year, full-time program is for mid-career professionals (at least eight years of work experience) who desire to develop their strengths in general management, leadership, and innovation.</p>
<a href="/programs/phd">PhD Program</a>
<p>Our rigorous, full-time doctoral program is for people pursuing a career in academic research and education focused on management.</p>'
      ),
    array(
        'title' => 'Executive Education',
        '#markup' => '<div class="program-columns"><div class="column-a"><a href="/programs/executive-education">Executive Education</a>
<p>Programs designed for senior executives to help them to drive results at the highest levels of global management. Expert faculty, accomplished participants, and Stanford’s unique culture of innovation combine to help participants shape the future of business. Offerings span the full spectrum of business topics.</p>
<a href="programs/social-innovation/executive-program-social-entrepreneurship">Executive Program in Social Entrepreneurship</a>
<p>A program designed to help social entrepreneurs take enterprises and innovative models to the next level.</p></div>
<div class="column-b"><a href="/programs/social-innovation/executive-program-nonprofit-leaders">Executive Program for Nonprofit Leaders</a>
<p>A program designed to further the professional development of current and future leaders in the nonprofit sector.</p>
<a href="/programs/executive-program-education-leaders">Executive Program for Educational Leaders</a>
<p>A program that supports the development of innovative, problem-solving management skills and leadership capacity for current superintendents and other central office leaders.</p></div></div>'
      ),
/*    
      array(
        'title' => 'General Management',
        '#markup' => '<div class="program-columns"><div class="column-a"><a href="/programs/mba">MBA Program</a>
<p>The Stanford MBA Program creates leaders who change the world. In this two-year program, you’ll be exposed to new ways of thinking that make a valued and permanent impact on your future success.</p>
<a href="/sigm">Summer Institute for General Management</a>
<p>This intensive four-week residential program provides undergraduates and young professionals with the business knowledge that will help distinguish them from the crowd.</p>
</div>
<div class="column-b">
<a href="/programs/msx">MSx Program</a>
<p>This one-year, full-time program for mid-career professionals provides deep knowledge of the art and science of leadership in a concentrated, energetic environment.</p>
<a href="/exed">Executive Education</a>
<p>No two Stanford GSB Executive Education offerings are the same. You\'ll find a wide range of programs focusing on leadership development, managing team dynamics, international management and more.</p>
</div></div>'
      ),
*/
      array(
        'title' => 'Entrepreneurship',
        '#markup' => '<div class="program-columns"><div class="column-a"><a href="/programs/stanford-ignite">Stanford Ignite</a>
<p>This unique certificate program helps innovators formulate, develop, and commercialize their business ideas. Stanford Ignite is offered at Stanford and several global locations.</p>
<a href="/programs/stanford-online-innovation-entrepreneurship-certificate">Stanford Innovation and Entrepreneurship</a>
<p>This online program empowers you to more effectively generate and implement new ideas and lead innovative teams and organizations. Self-paced courses are available online. Earn a certificate on your own schedule.</p>
</div><div class="column-b">
<a href="/programs/social-innovation">Social Innovation Programs</a>
<p>Our Executive Program in Social Entrepreneurship is a one-week residential program designed to help seasoned social entrepreneurs take enterprises and innovative models to the next level.</p>
<a href="/programs/stanford-gotomarket">Stanford go•to•market</a>
<p>A certificate program ​​that teach​es​ high-potential innovators how to refine their business plan and develop a go-to-market strategy. Offered in Mexico City.</p>
</div></div>'
      ),
      array(
        'title' => 'Global',
        '#markup' => '<a href="/programs/stanford-ignite">Stanford Ignite</a>
<p>This unique certificate program helps innovators around the world without graduate-level business training to formulate, develop, and commercialize their business ideas.</p>
<p>Stanford Ignite is offered as a nine-week, part-time program in Bangalore, Beijing, London, New York City, Santiago, São Paulo, and on the Stanford campus. A four-week, full-time program is also available at Stanford.</p>
<a href="/programs/stanford-gotomarket">Stanford go•to•market</a>
<p>A certificate program ​​that teach​es​ high-potential innovators how to refine their business plan and develop a go-to-market strategy. The program is taught through a combination of in-person instruction and live sessions delivered by distance-learning technology.</p>'
      ),
      array(
        'title' => 'Social Innovation',
        '#markup' => '<a href="/programs/mba/academic-experience/curriculum">MBA Program</a>
<p>The Stanford MBA Program allows you to focus your educational efforts in areas such as environment, international development, healthcare, and education by participating in the Public Management and Social Innovation certificate program.</p>
<a href="/programs/social-innovation">Social Innovation Programs</a>
<p>Our social innovation programs focus on developing leaders who can solve the world\'s most challenging problems in areas such as education, the environment, poverty, healthcare, and social justice.</p>
<a href="/programs/executive-program-education-leaders">Executive Program for Education Leaders</a>
<p>A program that supports the development of innovative, problem-solving management skills and leadership capacity for current superintendents and other central office leaders.</p>'
      ),   
/*         
      array(
        'title' => 'Entrepreneurship',
        '#markup' => '<a href="/ignite">Stanford Ignite</a>
<p>A 9-week part-time program offered at Stanford, Bangalore, Beijing and Paris. This unique certificate program helps innovators formulate, develop, and commercialize their business ideas.</p>
<a href="/exed/epse">Social Innovation Programs</a>
<p>Our social innovation programs focus on developing leaders who can solve the world\'s most challenging problems in areas such as education, the environment, poverty, healthcare, and social justice.</p>
<a href="/exed/custom.html">Custom Programs</a>
<p>Stanford GSB works with select global corporate leaders to develop strategic solutions to their unique business challenges.</p>'
      ),
*/
      array(
        'title' => 'Multidisciplinary',
        '#markup' => '<a href="/programs/mba/academic-experience/curriculum">MBA Program</a>
<p>Your goals and interests may span multiple academic disciplines or areas of expertise. That is why the Stanford MBA Program empowers you to combine studies.
</p><p>Nearly 20% of Stanford MBA students take advantage of a joint or dual degree to complement the MBA. As a student, you can also take courses in any graduate school at Stanford University.</p>
<a href="/programs/executive-program-education-leaders">Executive Program for Education Leaders</a>
<p>A program that supports the development of innovative, problem-solving management skills and leadership capacity for current superintendents and other central office leaders.</p>'
      ),
      array(
        'title' => 'Online',
        '#markup' => '<a href="/exed/lead/">Stanford LEAD Certificate</a>
<p>Learn. Engage. Accelerate. Disrupt. This unique and selective certificate program redefines the boundaries of learning to create a flexible and interactive online experience with the academic rigor, world-class faculty,and innovative frameworks for which Stanford GSB is renowned.</p><a href="/programs/stanford-online-innovation-entrepreneurship-certificate">Stanford Innovation and Entrepreneurship</a>
<p>This online program empowers you to more effectively generate and implement new ideas and lead innovative teams and organizations. Taught by Stanford faculty, these self-paced courses are engaging and full of strategies you can apply immediately. Earn a certificate on your own schedule.</p>'
      ),
      array(
        'title' => 'Undergraduate',
        '#markup' => '<a href="/programs/sigm">Summer Institute for General Management</a>
<p>This intensive four-week residential program provides undergraduates and young professionals with the business knowledge that will help distinguish them from the crowd.</p>'
      ),
  );
  return (object) array(
    'title' => t(''),
    'content' => _gsb_public_custom_blocks_generate_tabs($tabs),
  );
}
