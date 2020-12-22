<?php
/**
 * @file
 * kkb_newsletter_paragraphs.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function kkb_newsletter_paragraphs_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_newsletter_administration';
  $strongarm->value = 0;
  $export['comment_anonymous_newsletter_administration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_newsletter_administration';
  $strongarm->value = 1;
  $export['comment_default_mode_newsletter_administration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_newsletter_administration';
  $strongarm->value = '50';
  $export['comment_default_per_page_newsletter_administration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_newsletter_administration';
  $strongarm->value = 1;
  $export['comment_form_location_newsletter_administration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_newsletter_administration';
  $strongarm->value = '2';
  $export['comment_newsletter_administration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_newsletter_administration';
  $strongarm->value = '1';
  $export['comment_preview_newsletter_administration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_newsletter_administration';
  $strongarm->value = 1;
  $export['comment_subject_field_newsletter_administration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_enable_revisions_page_node_newsletter_administration';
  $strongarm->value = 1;
  $export['diff_enable_revisions_page_node_newsletter_administration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_show_preview_changes_node_newsletter_administration';
  $strongarm->value = 1;
  $export['diff_show_preview_changes_node_newsletter_administration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'diff_view_mode_preview_node_newsletter_administration';
  $strongarm->value = 'full';
  $export['diff_view_mode_preview_node_newsletter_administration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_ipe_filter_panes_selected';
  $strongarm->value = array(
    'ding-:all_opening_hours' => 'ding-:all_opening_hours',
    'ding-:ding_nodelist' => 'ding-:ding_nodelist',
    'ding-:kkb_newsletter' => 'ding-:kkb_newsletter',
    'ding-:ding_tabroll-ding_frontpage_tabroll' => 'ding-:ding_tabroll-ding_frontpage_tabroll',
    'materialer:carousel' => 'materialer:carousel',
    'root:custom' => 'root:custom',
    'aktivitet:comment-recent' => 0,
    'aktivitet:user-new' => 0,
    'aktivitet:user-online' => 0,
    'bruger:ding_staff-ding_staff_list_all' => 0,
    'bruger:ding_staff-ding_staff_library_departments' => 0,
    'bruger:current_user_name' => 0,
    'brugerdefinerede-blokke:block-1' => 0,
    'ddb-react-komponenter:followed_searches' => 0,
    'ddb-react-komponenter:checklist' => 0,
    'ding-:weekly_opening_hours' => 0,
    'ding-:ding_eresource_index' => 0,
    'ding-:taxonomy_menu' => 0,
    'ding-:menu_title' => 0,
    'ding-:library_list' => 0,
    'ding-:social_links' => 0,
    'ding-:kkb_contact_footer' => 0,
    'ding-:ding_content_workbench-content_list' => 0,
    'ding-:ding_content_workbench-summary' => 0,
    'diverse:diff-inline' => 0,
    'diverse:ding_availability-legend' => 0,
    'diverse:ding_dibs-dibs-terms-of-sale' => 0,
    'diverse:ding_dibs-dibs-cards-supported' => 0,
    'diverse:ding_facetbrowser-facetbrowser' => 0,
    'diverse:ding_library-library_address' => 0,
    'diverse:ding_toggle_format-toggle' => 0,
    'diverse:formblock-user_register' => 0,
    'diverse:formblock-contact_site' => 0,
    'diverse:formblock-user_password_request' => 0,
    'diverse:og_menu-og_single_menu_block' => 0,
    'diverse:og_menu-og_multi_menu_block' => 0,
    'diverse:opening_hours-week' => 0,
    'diverse:shortcut-shortcuts' => 0,
    'diverse:ting-ting_collection_types' => 0,
    'diverse:ting-ting_object_types' => 0,
    'diverse:ting_search-sort_form' => 0,
    'diverse:ting_search-search_display_extended_query' => 0,
    'diverse:workbench-block' => 0,
    'diverse:ding_user_frontend-ding-username' => 0,
    'diverse:ding_user_frontend-ding-user-ajax-login' => 0,
    'eksisterende-sider:pm_existing_pages' => 0,
    'event-panes:ding_event-ding_event_list_frontpage' => 0,
    'event-panes:ding_event-ding_event_simple_list' => 0,
    'groups-panes:ding_groups-ding_group_overview_simple' => 0,
    'groups-panes:ding_groups-panel_pane_frontpage' => 0,
    'groups-panes:kkb_ding_groups_category_temapages-ding_group_overview_simple' => 0,
    'groups-panes:kkb_ding_groups_category_temapages-panel_pane_frontpage' => 0,
    'library-panes:ding_library-ding_library_libraries_list' => 0,
    'library-panes:ding_library-ding_library_leaflet' => 0,
    'materialer:ding_facetbrowser' => 0,
    'materialer:fulltext' => 0,
    'materialer:ting_search' => 0,
    'menuer:menu-menu-og-15282' => 0,
    'menuer:menu-menu-og-18' => 0,
    'menuer:menu-menu-og-23474' => 0,
    'menuer:menu-menu-og-11028' => 0,
    'menuer:menu-menu-footer-menu-1' => 0,
    'menuer:menu-menu-og-2646' => 0,
    'menuer:menu-menu-og-16' => 0,
    'menuer:menu-menu-og-17317' => 0,
    'menuer:menu-menu-og-5' => 0,
    'menuer:menu-menu-og-11030' => 0,
    'menuer:menu-menu-og-11036' => 0,
    'menuer:menu-menu-og-25' => 0,
    'menuer:menu-menu-og-17319' => 0,
    'menuer:menu-menu-og-19523' => 0,
    'menuer:menu-menu-og-21244' => 0,
    'menuer:menu-menu-og-6' => 0,
    'menuer:menu-menu-og-17391' => 0,
    'menuer:menu-menu-og-17395' => 0,
    'menuer:menu-menu-og-18965' => 0,
    'menuer:menu-menu-og-17303' => 0,
    'menuer:menu-menu-og-17341' => 0,
    'menuer:menu-menu-og-17386' => 0,
    'menuer:menu-menu-og-17344' => 0,
    'menuer:menu-menu-og-17381' => 0,
    'menuer:menu-menu-og-6467' => 0,
    'menuer:menu-menu-og-2647' => 0,
    'menuer:menu-menu-og-17301' => 0,
    'menuer:menu-features' => 0,
    'menuer:menu-menu-og-2651' => 0,
    'menuer:menu-menu-og-17318' => 0,
    'menuer:menu-menu-og-2648' => 0,
    'menuer:menu-menu-og-19528' => 0,
    'menuer:menu-menu-og-17290' => 0,
    'menuer:menu-menu-og-10603' => 0,
    'menuer:menu-menu-og-17295' => 0,
    'menuer:menu-menu-og-17316' => 0,
    'menuer:menu-menu-footer-menu-4' => 0,
    'menuer:menu-menu-og-24' => 0,
    'menuer:menu-menu-og-7' => 0,
    'menuer:menu-menu-og-17323' => 0,
    'menuer:menu-content-menu' => 0,
    'menuer:menu-menu-og-23' => 0,
    'menuer:menu-menu-og-11381' => 0,
    'menuer:menu-menu-og-17293' => 0,
    'menuer:menu-menu-og-17394' => 0,
    'menuer:menu-menu-og-9' => 0,
    'menuer:menu-menu-og-17322' => 0,
    'menuer:menu-menu-og-17297' => 0,
    'menuer:menu-menu-og-14367' => 0,
    'menuer:menu-menu-og-10995' => 0,
    'menuer:menu-menu-og-8703' => 0,
    'menuer:menu-menu-og-17321' => 0,
    'menuer:menu-menu-og-11379' => 0,
    'menuer:menu-menu-og-4492' => 0,
    'menuer:menu-menu-og-2649' => 0,
    'menuer:menu-menu-og-17393' => 0,
    'menuer:menu-menu-og-13554' => 0,
    'menuer:menu-menu-og-17539' => 0,
    'menuer:menu-menu-og-26' => 0,
    'menuer:menu-menu-footer-menu-3' => 0,
    'menuer:menu-menu-og-22805' => 0,
    'menuer:menu-menu-og-4582' => 0,
    'menuer:menu-menu-og-17320' => 0,
    'menuer:menu-menu-og-17291' => 0,
    'menuer:menu-menu-og-11384' => 0,
    'menuer:menu-menu-og-17300' => 0,
    'menuer:menu-menu-secondary-menu' => 0,
    'menuer:menu-menu-og-21' => 0,
    'menuer:menu-menu-og-17397' => 0,
    'menuer:menu-menu-og-15752' => 0,
    'menuer:menu-menu-og-10' => 0,
    'menuer:menu-menu-og-22' => 0,
    'menuer:menu-menu-og-17682' => 0,
    'menuer:menu-menu-og-17302' => 0,
    'menuer:menu-menu-og-15087' => 0,
    'menuer:menu-menu-og-14943' => 0,
    'menuer:menu-menu-og-13' => 0,
    'menuer:menu-menu-tabs-menu' => 0,
    'menuer:menu-menu-og-20' => 0,
    'menuer:menu-menu-og-8' => 0,
    'menuer:menu-menu-og-19' => 0,
    'menuer:menu-menu-og-11378' => 0,
    'menuer:menu-menu-og-16196' => 0,
    'menuer:menu-menu-og-11' => 0,
    'menuer:menu-menu-og-17' => 0,
    'menuer:menu-menu-og-4' => 0,
    'menuer:menu_block-1' => 0,
    'menuer:menu_block-2' => 0,
    'menuer:menu_block-main_menu_second_level' => 0,
    'menuer:menu_block-3' => 0,
    'menuer:menu_block-content_menu' => 0,
    'menuer:system-navigation' => 0,
    'menuer:system-management' => 0,
    'menuer:system-user-menu' => 0,
    'menuer:system-main-menu' => 0,
    'menuer:_active' => 0,
    'menuer:menu-og-15282' => 0,
    'menuer:menu-og-18' => 0,
    'menuer:menu-og-23474' => 0,
    'menuer:menu-og-11028' => 0,
    'menuer:menu-footer-menu-1' => 0,
    'menuer:menu-og-2646' => 0,
    'menuer:menu-og-16' => 0,
    'menuer:menu-og-17317' => 0,
    'menuer:menu-og-5' => 0,
    'menuer:menu-og-11030' => 0,
    'menuer:menu-og-11036' => 0,
    'menuer:menu-og-25' => 0,
    'menuer:menu-og-17319' => 0,
    'menuer:menu-og-19523' => 0,
    'menuer:menu-og-21244' => 0,
    'menuer:menu-og-6' => 0,
    'menuer:menu-og-17391' => 0,
    'menuer:menu-og-17395' => 0,
    'menuer:menu-og-18965' => 0,
    'menuer:menu-og-17303' => 0,
    'menuer:menu-og-17341' => 0,
    'menuer:menu-og-17386' => 0,
    'menuer:menu-og-17344' => 0,
    'menuer:menu-og-17381' => 0,
    'menuer:menu-og-6467' => 0,
    'menuer:menu-og-2647' => 0,
    'menuer:menu-og-17301' => 0,
    'menuer:features' => 0,
    'menuer:menu-og-2651' => 0,
    'menuer:menu-og-17318' => 0,
    'menuer:menu-og-2648' => 0,
    'menuer:menu-og-19528' => 0,
    'menuer:menu-og-17290' => 0,
    'menuer:menu-og-10603' => 0,
    'menuer:menu-og-17295' => 0,
    'menuer:menu-og-17316' => 0,
    'menuer:menu-footer-menu-4' => 0,
    'menuer:menu-og-24' => 0,
    'menuer:main-menu' => 0,
    'menuer:menu-og-7' => 0,
    'menuer:menu-og-17323' => 0,
    'menuer:content-menu' => 0,
    'menuer:menu-og-23' => 0,
    'menuer:menu-og-11381' => 0,
    'menuer:menu-og-17293' => 0,
    'menuer:menu-og-17394' => 0,
    'menuer:menu-og-9' => 0,
    'menuer:menu-og-17322' => 0,
    'menuer:menu-og-17297' => 0,
    'menuer:menu-og-14367' => 0,
    'menuer:menu-og-10995' => 0,
    'menuer:menu-og-8703' => 0,
    'menuer:menu-og-17321' => 0,
    'menuer:menu-og-11379' => 0,
    'menuer:management' => 0,
    'menuer:menu-og-4492' => 0,
    'menuer:user-menu' => 0,
    'menuer:menu-og-2649' => 0,
    'menuer:menu-og-17393' => 0,
    'menuer:navigation' => 0,
    'menuer:menu-og-13554' => 0,
    'menuer:menu-og-17539' => 0,
    'menuer:menu-og-26' => 0,
    'menuer:menu-footer-menu-3' => 0,
    'menuer:menu-og-22805' => 0,
    'menuer:menu-og-4582' => 0,
    'menuer:menu-og-17320' => 0,
    'menuer:menu-og-17291' => 0,
    'menuer:menu-og-11384' => 0,
    'menuer:menu-og-17300' => 0,
    'menuer:menu-secondary-menu' => 0,
    'menuer:menu-og-21' => 0,
    'menuer:menu-og-17397' => 0,
    'menuer:menu-og-15752' => 0,
    'menuer:menu-og-10' => 0,
    'menuer:menu-og-22' => 0,
    'menuer:menu-og-17682' => 0,
    'menuer:menu-og-17302' => 0,
    'menuer:menu-og-15087' => 0,
    'menuer:menu-og-14943' => 0,
    'menuer:menu-og-13' => 0,
    'menuer:menu-tabs-menu' => 0,
    'menuer:menu-og-20' => 0,
    'menuer:menu-og-8' => 0,
    'menuer:menu-og-19' => 0,
    'menuer:menu-og-11378' => 0,
    'menuer:menu-og-16196' => 0,
    'menuer:menu-og-11' => 0,
    'menuer:menu-og-17' => 0,
    'menuer:menu-og-4' => 0,
    'news-panes:ding_news-ding_news_frontpage_list' => 0,
    'news-panes:ding_news-ding_news_list' => 0,
    'news-panes:ding_news-panel_pane_2' => 0,
    'root:node' => 0,
    'sideelementer:system-help' => 0,
    'sideelementer:page_tabs' => 0,
    'sideelementer:page_title' => 0,
    'sideelementer:page_slogan' => 0,
    'sideelementer:page_feed_icons' => 0,
    'sideelementer:page_breadcrumb' => 0,
    'sideelementer:page_site_name' => 0,
    'sideelementer:page_messages' => 0,
    'sideelementer:page_logo' => 0,
    'sideelementer:page_help' => 0,
    'sideelementer:page_primary_links' => 0,
    'sideelementer:page_secondary_links' => 0,
    'sideelementer:page_actions' => 0,
    'sideelementer:pane_navigation' => 0,
    'sideelementer:pane_header' => 0,
    'sideelementer:pane_messages' => 0,
    'view-panes:ding_eresource-ding_eresource_list' => 0,
    'view-panes:ding_eresource-ding_eresource_category' => 0,
    'view-panes:ding_multiple_search-panel_pane_1' => 0,
    'view-panes:ding_node_search-panel_pane_1' => 0,
    'view-panes:ding_related_content-news_events' => 0,
    'view-panes:ding_node-panel_pane_ding_node' => 0,
    'view-panes:og_all_user_group_content-panel_pane_1' => 0,
    'views:views--exp-ding_event-ding_event_list' => 0,
    'views:views--exp-ding_news-ding_news_list' => 0,
    'views:views-98880b6fbff6f74deeae473932e04e0b' => 0,
    'views:workbench_edited' => 0,
    'views:webform_analysis' => 0,
    'views:webform_results' => 0,
    'views:webform_submissions' => 0,
    'views:webform_webforms' => 0,
    'views:ding_content_workbench' => 0,
    'views:tags_list' => 0,
    'views:ding_eresource' => 0,
    'views:ding_event' => 0,
    'views:ding_multiple_search' => 0,
    'views:ding_node_search' => 0,
    'views:ding_related_content' => 0,
    'views:ding_groups' => 0,
    'views:ding_library' => 0,
    'views:ding_news' => 0,
    'views:ding_node' => 0,
    'views:ding_staff' => 0,
    'views:ding_staff_admin_users' => 0,
    'views:ding_tabroll' => 0,
    'views:kkb_ding_groups_category_temapages' => 0,
    'views:kkb_help' => 0,
    'views:newsletter' => 0,
    'views:kkb_filtered_news' => 0,
    'views:media_default' => 0,
    'views:nodequeue_4' => 0,
    'views:nodequeue_2' => 0,
    'views:nodequeue_1' => 0,
    'views:nodequeue_3' => 0,
    'views:og_members' => 0,
    'views:og_nodes' => 0,
    'views:og_user_groups' => 0,
    'views:og_all_user_group_content' => 0,
    'views:og_members_admin' => 0,
    'views:workbench_current_user' => 0,
    'views:workbench_recent_content' => 0,
    'views:workflow_summary' => 0,
    'views:ding_app_content_event_rss' => 0,
    'views:ding_app_content_news_rss' => 0,
    'views:admin_views_node' => 0,
    'views:admin_views_user' => 0,
    'views:admin_views_comment' => 0,
    'views:admin_views_file' => 0,
    'widgets:locale-language' => 0,
    'widgets:node-syndicate' => 0,
    'widgets:node-recent' => 0,
    'widgets:search-form' => 0,
    'widgets:system-powered-by' => 0,
    'widgets:user-login' => 0,
    'widgets:search_form' => 0,
  );
  $export['ding_ipe_filter_panes_selected'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__newsletter_administration';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__newsletter_administration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_newsletter_administration';
  $strongarm->value = '1';
  $export['language_content_type_newsletter_administration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_newsletter_administration';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_newsletter_administration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_newsletter_administration';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_newsletter_administration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_newsletter_administration';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_newsletter_administration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_newsletter_administration';
  $strongarm->value = '1';
  $export['node_preview_newsletter_administration'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_newsletter_administration';
  $strongarm->value = 1;
  $export['node_submitted_newsletter_administration'] = $strongarm;

  return $export;
}