<?php
/**
 * @file
 * ecsa_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ecsa_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access bean overview'.
  $permissions['access bean overview'] = array(
    'name' => 'access bean overview',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access draggableviews'.
  $permissions['access draggableviews'] = array(
    'name' => 'access draggableviews',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'draggableviews',
  );

  // Exported permission: 'access linked field list'.
  $permissions['access linked field list'] = array(
    'name' => 'access linked field list',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'linked_field',
  );

  // Exported permission: 'access media browser'.
  $permissions['access media browser'] = array(
    'name' => 'access media browser',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Admin' => 'Admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'admin_classes'.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_display_suite'.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'ds',
  );

  // Exported permission: 'admin_fields'.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'admin_view_modes'.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer bean settings'.
  $permissions['administer bean settings'] = array(
    'name' => 'administer bean settings',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean types'.
  $permissions['administer bean types'] = array(
    'name' => 'administer bean types',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer bean usage'.
  $permissions['administer bean usage'] = array(
    'name' => 'administer bean usage',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean_usage',
  );

  // Exported permission: 'administer beans'.
  $permissions['administer beans'] = array(
    'name' => 'administer beans',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer breakpoints'.
  $permissions['administer breakpoints'] = array(
    'name' => 'administer breakpoints',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'breakpoints',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer custom content'.
  $permissions['administer custom content'] = array(
    'name' => 'administer custom content',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'ctools_custom_content',
  );

  // Exported permission: 'administer date tools'.
  $permissions['administer date tools'] = array(
    'name' => 'administer date tools',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'date_tools',
  );

  // Exported permission: 'administer entity translation'.
  $permissions['administer entity translation'] = array(
    'name' => 'administer entity translation',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'administer facets'.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer fieldgroups'.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'field_group',
  );

  // Exported permission: 'administer fields'.
  $permissions['administer fields'] = array(
    'name' => 'administer fields',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'field',
  );

  // Exported permission: 'administer file types'.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer files'.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer flexslider'.
  $permissions['administer flexslider'] = array(
    'name' => 'administer flexslider',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'flexslider',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer language_switcher'.
  $permissions['administer language_switcher'] = array(
    'name' => 'administer language_switcher',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'language_switcher',
  );

  // Exported permission: 'administer languages'.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'administer locationmap'.
  $permissions['administer locationmap'] = array(
    'name' => 'administer locationmap',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'locationmap',
  );

  // Exported permission: 'administer manualcrop settings'.
  $permissions['administer manualcrop settings'] = array(
    'name' => 'administer manualcrop settings',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'manualcrop',
  );

  // Exported permission: 'administer media browser'.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'media',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer menu positions'.
  $permissions['administer menu positions'] = array(
    'name' => 'administer menu positions',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'menu_position',
  );

  // Exported permission: 'administer menu_token'.
  $permissions['administer menu_token'] = array(
    'name' => 'administer menu_token',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'menu_token',
  );

  // Exported permission: 'administer meta tags'.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panel-nodes'.
  $permissions['administer panel-nodes'] = array(
    'name' => 'administer panel-nodes',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels_node',
  );

  // Exported permission: 'administer panels display styles'.
  $permissions['administer panels display styles'] = array(
    'name' => 'administer panels display styles',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels pane styles'.
  $permissions['administer panels pane styles'] = array(
    'name' => 'administer panels pane styles',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels region styles'.
  $permissions['administer panels region styles'] = array(
    'name' => 'administer panels region styles',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer pictures'.
  $permissions['administer pictures'] = array(
    'name' => 'administer pictures',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'picture',
  );

  // Exported permission: 'administer profile types'.
  $permissions['administer profile types'] = array(
    'name' => 'administer profile types',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer profile2_regpath'.
  $permissions['administer profile2_regpath'] = array(
    'name' => 'administer profile2_regpath',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'profile2_regpath',
  );

  // Exported permission: 'administer profiler builder'.
  $permissions['administer profiler builder'] = array(
    'name' => 'administer profiler builder',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'profiler_builder',
  );

  // Exported permission: 'administer profiles'.
  $permissions['administer profiles'] = array(
    'name' => 'administer profiles',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'redirect',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'administer search_api'.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'search_api',
  );

  // Exported permission: 'administer select2'.
  $permissions['administer select2'] = array(
    'name' => 'administer select2',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'select2',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer tb_megamenu'.
  $permissions['administer tb_megamenu'] = array(
    'name' => 'administer tb_megamenu',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'tb_megamenu',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer video styles'.
  $permissions['administer video styles'] = array(
    'name' => 'administer video styles',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'video_embed_field',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'views',
  );

  // Exported permission: 'administer widgets sets'.
  $permissions['administer widgets sets'] = array(
    'name' => 'administer widgets sets',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'widgets',
  );

  // Exported permission: 'administer youtube'.
  $permissions['administer youtube'] = array(
    'name' => 'administer youtube',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'youtube',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass access in place editing'.
  $permissions['bypass access in place editing'] = array(
    'name' => 'bypass access in place editing',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'bypass file access'.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear import_pressemitteilungen feeds'.
  $permissions['clear import_pressemitteilungen feeds'] = array(
    'name' => 'clear import_pressemitteilungen feeds',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear profiles_ind feeds'.
  $permissions['clear profiles_ind feeds'] = array(
    'name' => 'clear profiles_ind feeds',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear profiles_org feeds'.
  $permissions['clear profiles_org feeds'] = array(
    'name' => 'clear profiles_org feeds',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear profiles_org_url feeds'.
  $permissions['clear profiles_org_url feeds'] = array(
    'name' => 'clear profiles_org_url feeds',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear profiles_sup feeds'.
  $permissions['clear profiles_sup feeds'] = array(
    'name' => 'clear profiles_sup feeds',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clone node'.
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'clone own nodes'.
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'clone',
  );

  // Exported permission: 'configure tablefield'.
  $permissions['configure tablefield'] = array(
    'name' => 'configure tablefield',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'create any bean_tax_listing bean'.
  $permissions['create any bean_tax_listing bean'] = array(
    'name' => 'create any bean_tax_listing bean',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any bean_tax_related bean'.
  $permissions['create any bean_tax_related bean'] = array(
    'name' => 'create any bean_tax_related bean',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any kategorietext bean'.
  $permissions['create any kategorietext bean'] = array(
    'name' => 'create any kategorietext bean',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any namu_header_info_block bean'.
  $permissions['create any namu_header_info_block bean'] = array(
    'name' => 'create any namu_header_info_block bean',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create files'.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'create namu_article content'.
  $permissions['create namu_article content'] = array(
    'name' => 'create namu_article content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create namu_news content'.
  $permissions['create namu_news content'] = array(
    'name' => 'create namu_news content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create namu_page content'.
  $permissions['create namu_page content'] = array(
    'name' => 'create namu_page content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create namu_slider content'.
  $permissions['create namu_slider content'] = array(
    'name' => 'create namu_slider content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create panel content'.
  $permissions['create panel content'] = array(
    'name' => 'create panel content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'path',
  );

  // Exported permission: 'delete any audio files'.
  $permissions['delete any audio files'] = array(
    'name' => 'delete any audio files',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any bean_tax_listing bean'.
  $permissions['delete any bean_tax_listing bean'] = array(
    'name' => 'delete any bean_tax_listing bean',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any bean_tax_related bean'.
  $permissions['delete any bean_tax_related bean'] = array(
    'name' => 'delete any bean_tax_related bean',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any document files'.
  $permissions['delete any document files'] = array(
    'name' => 'delete any document files',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any image files'.
  $permissions['delete any image files'] = array(
    'name' => 'delete any image files',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any kategorietext bean'.
  $permissions['delete any kategorietext bean'] = array(
    'name' => 'delete any kategorietext bean',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any namu_article content'.
  $permissions['delete any namu_article content'] = array(
    'name' => 'delete any namu_article content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any namu_header_info_block bean'.
  $permissions['delete any namu_header_info_block bean'] = array(
    'name' => 'delete any namu_header_info_block bean',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any namu_news content'.
  $permissions['delete any namu_news content'] = array(
    'name' => 'delete any namu_news content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any namu_page content'.
  $permissions['delete any namu_page content'] = array(
    'name' => 'delete any namu_page content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any namu_slider content'.
  $permissions['delete any namu_slider content'] = array(
    'name' => 'delete any namu_slider content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any panel content'.
  $permissions['delete any panel content'] = array(
    'name' => 'delete any panel content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any supporterogos_file_desaturate_x50_ files'.
  $permissions['delete any supporterogos_file_desaturate_x50_ files'] = array(
    'name' => 'delete any supporterogos_file_desaturate_x50_ files',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete any video files'.
  $permissions['delete any video files'] = array(
    'name' => 'delete any video files',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own namu_article content'.
  $permissions['delete own namu_article content'] = array(
    'name' => 'delete own namu_article content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own namu_news content'.
  $permissions['delete own namu_news content'] = array(
    'name' => 'delete own namu_news content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own namu_page content'.
  $permissions['delete own namu_page content'] = array(
    'name' => 'delete own namu_page content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own namu_slider content'.
  $permissions['delete own namu_slider content'] = array(
    'name' => 'delete own namu_slider content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own panel content'.
  $permissions['delete own panel content'] = array(
    'name' => 'delete own panel content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own supporterogos_file_desaturate_x50_ files'.
  $permissions['delete own supporterogos_file_desaturate_x50_ files'] = array(
    'name' => 'delete own supporterogos_file_desaturate_x50_ files',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in namu_articletype'.
  $permissions['delete terms in namu_articletype'] = array(
    'name' => 'delete terms in namu_articletype',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in namu_kategorien'.
  $permissions['delete terms in namu_kategorien'] = array(
    'name' => 'delete terms in namu_kategorien',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in newsletter'.
  $permissions['delete terms in newsletter'] = array(
    'name' => 'delete terms in newsletter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'display drupal links'.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'download any audio files'.
  $permissions['download any audio files'] = array(
    'name' => 'download any audio files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any document files'.
  $permissions['download any document files'] = array(
    'name' => 'download any document files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any image files'.
  $permissions['download any image files'] = array(
    'name' => 'download any image files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any supporterogos_file_desaturate_x50_ files'.
  $permissions['download any supporterogos_file_desaturate_x50_ files'] = array(
    'name' => 'download any supporterogos_file_desaturate_x50_ files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download any video files'.
  $permissions['download any video files'] = array(
    'name' => 'download any video files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own audio files'.
  $permissions['download own audio files'] = array(
    'name' => 'download own audio files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own document files'.
  $permissions['download own document files'] = array(
    'name' => 'download own document files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own image files'.
  $permissions['download own image files'] = array(
    'name' => 'download own image files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own supporterogos_file_desaturate_x50_ files'.
  $permissions['download own supporterogos_file_desaturate_x50_ files'] = array(
    'name' => 'download own supporterogos_file_desaturate_x50_ files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'download own video files'.
  $permissions['download own video files'] = array(
    'name' => 'download own video files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any audio files'.
  $permissions['edit any audio files'] = array(
    'name' => 'edit any audio files',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any bean_tax_listing bean'.
  $permissions['edit any bean_tax_listing bean'] = array(
    'name' => 'edit any bean_tax_listing bean',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any bean_tax_related bean'.
  $permissions['edit any bean_tax_related bean'] = array(
    'name' => 'edit any bean_tax_related bean',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any document files'.
  $permissions['edit any document files'] = array(
    'name' => 'edit any document files',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any image files'.
  $permissions['edit any image files'] = array(
    'name' => 'edit any image files',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any individual_profile profile'.
  $permissions['edit any individual_profile profile'] = array(
    'name' => 'edit any individual_profile profile',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any kategorietext bean'.
  $permissions['edit any kategorietext bean'] = array(
    'name' => 'edit any kategorietext bean',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any namu_article content'.
  $permissions['edit any namu_article content'] = array(
    'name' => 'edit any namu_article content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any namu_header_info_block bean'.
  $permissions['edit any namu_header_info_block bean'] = array(
    'name' => 'edit any namu_header_info_block bean',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any namu_news content'.
  $permissions['edit any namu_news content'] = array(
    'name' => 'edit any namu_news content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any namu_page content'.
  $permissions['edit any namu_page content'] = array(
    'name' => 'edit any namu_page content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any namu_slider content'.
  $permissions['edit any namu_slider content'] = array(
    'name' => 'edit any namu_slider content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any organization_profile profile'.
  $permissions['edit any organization_profile profile'] = array(
    'name' => 'edit any organization_profile profile',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any panel content'.
  $permissions['edit any panel content'] = array(
    'name' => 'edit any panel content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any supporter_profile profile'.
  $permissions['edit any supporter_profile profile'] = array(
    'name' => 'edit any supporter_profile profile',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit any supporterogos_file_desaturate_x50_ files'.
  $permissions['edit any supporterogos_file_desaturate_x50_ files'] = array(
    'name' => 'edit any supporterogos_file_desaturate_x50_ files',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit any video files'.
  $permissions['edit any video files'] = array(
    'name' => 'edit any video files',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit bean view mode'.
  $permissions['edit bean view mode'] = array(
    'name' => 'edit bean view mode',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit meta tags'.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'metatag',
  );

  // Exported permission: 'edit own audio files'.
  $permissions['edit own audio files'] = array(
    'name' => 'edit own audio files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own document files'.
  $permissions['edit own document files'] = array(
    'name' => 'edit own document files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own image files'.
  $permissions['edit own image files'] = array(
    'name' => 'edit own image files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own individual_profile profile'.
  $permissions['edit own individual_profile profile'] = array(
    'name' => 'edit own individual_profile profile',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
      'membership individual' => 'membership individual',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own namu_article content'.
  $permissions['edit own namu_article content'] = array(
    'name' => 'edit own namu_article content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own namu_news content'.
  $permissions['edit own namu_news content'] = array(
    'name' => 'edit own namu_news content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own namu_page content'.
  $permissions['edit own namu_page content'] = array(
    'name' => 'edit own namu_page content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own namu_slider content'.
  $permissions['edit own namu_slider content'] = array(
    'name' => 'edit own namu_slider content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own organization_profile profile'.
  $permissions['edit own organization_profile profile'] = array(
    'name' => 'edit own organization_profile profile',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
      'membership organization' => 'membership organization',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own panel content'.
  $permissions['edit own panel content'] = array(
    'name' => 'edit own panel content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own supporter_profile profile'.
  $permissions['edit own supporter_profile profile'] = array(
    'name' => 'edit own supporter_profile profile',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
      'membership supporter' => 'membership supporter',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own supporterogos_file_desaturate_x50_ files'.
  $permissions['edit own supporterogos_file_desaturate_x50_ files'] = array(
    'name' => 'edit own supporterogos_file_desaturate_x50_ files',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit own video files'.
  $permissions['edit own video files'] = array(
    'name' => 'edit own video files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'edit terms in namu_articletype'.
  $permissions['edit terms in namu_articletype'] = array(
    'name' => 'edit terms in namu_articletype',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in namu_kategorien'.
  $permissions['edit terms in namu_kategorien'] = array(
    'name' => 'edit terms in namu_kategorien',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in newsletter'.
  $permissions['edit terms in newsletter'] = array(
    'name' => 'edit terms in newsletter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'export tablefield'.
  $permissions['export tablefield'] = array(
    'name' => 'export tablefield',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'flush caches'.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'features',
  );

  // Exported permission: 'geocoder_service_all_handlers'.
  $permissions['geocoder_service_all_handlers'] = array(
    'name' => 'geocoder_service_all_handlers',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_bing'.
  $permissions['geocoder_service_handler_bing'] = array(
    'name' => 'geocoder_service_handler_bing',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_exif'.
  $permissions['geocoder_service_handler_exif'] = array(
    'name' => 'geocoder_service_handler_exif',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_google'.
  $permissions['geocoder_service_handler_google'] = array(
    'name' => 'geocoder_service_handler_google',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_gpx'.
  $permissions['geocoder_service_handler_gpx'] = array(
    'name' => 'geocoder_service_handler_gpx',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_json'.
  $permissions['geocoder_service_handler_json'] = array(
    'name' => 'geocoder_service_handler_json',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_kml'.
  $permissions['geocoder_service_handler_kml'] = array(
    'name' => 'geocoder_service_handler_kml',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_latlon'.
  $permissions['geocoder_service_handler_latlon'] = array(
    'name' => 'geocoder_service_handler_latlon',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_mapquest_nominatim'.
  $permissions['geocoder_service_handler_mapquest_nominatim'] = array(
    'name' => 'geocoder_service_handler_mapquest_nominatim',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_openstreetmap_nominatim'.
  $permissions['geocoder_service_handler_openstreetmap_nominatim'] = array(
    'name' => 'geocoder_service_handler_openstreetmap_nominatim',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_wkt'.
  $permissions['geocoder_service_handler_wkt'] = array(
    'name' => 'geocoder_service_handler_wkt',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_yahoo'.
  $permissions['geocoder_service_handler_yahoo'] = array(
    'name' => 'geocoder_service_handler_yahoo',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_yandex'.
  $permissions['geocoder_service_handler_yandex'] = array(
    'name' => 'geocoder_service_handler_yandex',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'import import_pressemitteilungen feeds'.
  $permissions['import import_pressemitteilungen feeds'] = array(
    'name' => 'import import_pressemitteilungen feeds',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import profiles_ind feeds'.
  $permissions['import profiles_ind feeds'] = array(
    'name' => 'import profiles_ind feeds',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import profiles_org feeds'.
  $permissions['import profiles_org feeds'] = array(
    'name' => 'import profiles_org feeds',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import profiles_org_url feeds'.
  $permissions['import profiles_org_url feeds'] = array(
    'name' => 'import profiles_org_url feeds',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import profiles_sup feeds'.
  $permissions['import profiles_sup feeds'] = array(
    'name' => 'import profiles_sup feeds',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'loft_data_grids:BootstrapHTMLExporter'.
  $permissions['loft_data_grids:BootstrapHTMLExporter'] = array(
    'name' => 'loft_data_grids:BootstrapHTMLExporter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'loft_data_grids',
  );

  // Exported permission: 'loft_data_grids:CSVExporter'.
  $permissions['loft_data_grids:CSVExporter'] = array(
    'name' => 'loft_data_grids:CSVExporter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'loft_data_grids',
  );

  // Exported permission: 'loft_data_grids:DrupalTableExporter'.
  $permissions['loft_data_grids:DrupalTableExporter'] = array(
    'name' => 'loft_data_grids:DrupalTableExporter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'loft_data_grids',
  );

  // Exported permission: 'loft_data_grids:FlatTextExporter'.
  $permissions['loft_data_grids:FlatTextExporter'] = array(
    'name' => 'loft_data_grids:FlatTextExporter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'loft_data_grids',
  );

  // Exported permission: 'loft_data_grids:HTMLExporter'.
  $permissions['loft_data_grids:HTMLExporter'] = array(
    'name' => 'loft_data_grids:HTMLExporter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'loft_data_grids',
  );

  // Exported permission: 'loft_data_grids:HtmlListExporter'.
  $permissions['loft_data_grids:HtmlListExporter'] = array(
    'name' => 'loft_data_grids:HtmlListExporter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'loft_data_grids',
  );

  // Exported permission: 'loft_data_grids:JSONExporter'.
  $permissions['loft_data_grids:JSONExporter'] = array(
    'name' => 'loft_data_grids:JSONExporter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'loft_data_grids',
  );

  // Exported permission: 'loft_data_grids:MarkdownExporter'.
  $permissions['loft_data_grids:MarkdownExporter'] = array(
    'name' => 'loft_data_grids:MarkdownExporter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'loft_data_grids',
  );

  // Exported permission: 'loft_data_grids:MarkdownTableExporter'.
  $permissions['loft_data_grids:MarkdownTableExporter'] = array(
    'name' => 'loft_data_grids:MarkdownTableExporter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'loft_data_grids',
  );

  // Exported permission: 'loft_data_grids:TabTextExporter'.
  $permissions['loft_data_grids:TabTextExporter'] = array(
    'name' => 'loft_data_grids:TabTextExporter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'loft_data_grids',
  );

  // Exported permission: 'loft_data_grids:TextListExporter'.
  $permissions['loft_data_grids:TextListExporter'] = array(
    'name' => 'loft_data_grids:TextListExporter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'loft_data_grids',
  );

  // Exported permission: 'loft_data_grids:ValuesOnlyExporter'.
  $permissions['loft_data_grids:ValuesOnlyExporter'] = array(
    'name' => 'loft_data_grids:ValuesOnlyExporter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'loft_data_grids',
  );

  // Exported permission: 'loft_data_grids:XLSXExporter'.
  $permissions['loft_data_grids:XLSXExporter'] = array(
    'name' => 'loft_data_grids:XLSXExporter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'loft_data_grids',
  );

  // Exported permission: 'loft_data_grids:XMLExporter'.
  $permissions['loft_data_grids:XMLExporter'] = array(
    'name' => 'loft_data_grids:XMLExporter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'loft_data_grids',
  );

  // Exported permission: 'loft_data_grids:YAMLExporter'.
  $permissions['loft_data_grids:YAMLExporter'] = array(
    'name' => 'loft_data_grids:YAMLExporter',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'loft_data_grids',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'features',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'rebuild tablefield'.
  $permissions['rebuild tablefield'] = array(
    'name' => 'rebuild tablefield',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: 'rename features'.
  $permissions['rename features'] = array(
    'name' => 'rename features',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'features',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'node',
  );

  // Exported permission: 'schedule publishing of nodes'.
  $permissions['schedule publishing of nodes'] = array(
    'name' => 'schedule publishing of nodes',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'user',
  );

  // Exported permission: 'toggle field translatability'.
  $permissions['toggle field translatability'] = array(
    'name' => 'toggle field translatability',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate bean entities'.
  $permissions['translate bean entities'] = array(
    'name' => 'translate bean entities',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate taxonomy_term entities'.
  $permissions['translate taxonomy_term entities'] = array(
    'name' => 'translate taxonomy_term entities',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'unlock import_pressemitteilungen feeds'.
  $permissions['unlock import_pressemitteilungen feeds'] = array(
    'name' => 'unlock import_pressemitteilungen feeds',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock profiles_ind feeds'.
  $permissions['unlock profiles_ind feeds'] = array(
    'name' => 'unlock profiles_ind feeds',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock profiles_org feeds'.
  $permissions['unlock profiles_org feeds'] = array(
    'name' => 'unlock profiles_org feeds',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock profiles_org_url feeds'.
  $permissions['unlock profiles_org_url feeds'] = array(
    'name' => 'unlock profiles_org_url feeds',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock profiles_sup feeds'.
  $permissions['unlock profiles_sup feeds'] = array(
    'name' => 'unlock profiles_sup feeds',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'use PHP for settings'.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'php',
  );

  // Exported permission: 'use ctools import'.
  $permissions['use ctools import'] = array(
    'name' => 'use ctools import',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'ctools',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use manualcrop'.
  $permissions['use manualcrop'] = array(
    'name' => 'use manualcrop',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'manualcrop',
  );

  // Exported permission: 'use media wysiwyg'.
  $permissions['use media wysiwyg'] = array(
    'name' => 'use media wysiwyg',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'media_wysiwyg',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use text format default'.
  $permissions['use text format default'] = array(
    'name' => 'use text format default',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format editor_text'.
  $permissions['use text format editor_text'] = array(
    'name' => 'use text format editor_text',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format fullhtml'.
  $permissions['use text format fullhtml'] = array(
    'name' => 'use text format fullhtml',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format mailchimp_campaign'.
  $permissions['use text format mailchimp_campaign'] = array(
    'name' => 'use text format mailchimp_campaign',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format namu_filtered_text'.
  $permissions['use text format namu_filtered_text'] = array(
    'name' => 'use text format namu_filtered_text',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format php_code'.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view advanced help index'.
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view advanced help popup'.
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view advanced help topic'.
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: 'view any bean_tax_listing bean'.
  $permissions['view any bean_tax_listing bean'] = array(
    'name' => 'view any bean_tax_listing bean',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
      'membership organization' => 'membership organization',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any bean_tax_related bean'.
  $permissions['view any bean_tax_related bean'] = array(
    'name' => 'view any bean_tax_related bean',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any individual_profile profile'.
  $permissions['view any individual_profile profile'] = array(
    'name' => 'view any individual_profile profile',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
      'membership supporter' => 'membership supporter',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any kategorietext bean'.
  $permissions['view any kategorietext bean'] = array(
    'name' => 'view any kategorietext bean',
    'roles' => array(
      'Admin' => 'Admin',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any namu_header_info_block bean'.
  $permissions['view any namu_header_info_block bean'] = array(
    'name' => 'view any namu_header_info_block bean',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
      'membership supporter' => 'membership supporter',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any organization_profile profile'.
  $permissions['view any organization_profile profile'] = array(
    'name' => 'view any organization_profile profile',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
      'membership supporter' => 'membership supporter',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view any supporter_profile profile'.
  $permissions['view any supporter_profile profile'] = array(
    'name' => 'view any supporter_profile profile',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'membership individual' => 'membership individual',
      'membership organization' => 'membership organization',
      'membership supporter' => 'membership supporter',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view bean page'.
  $permissions['view bean page'] = array(
    'name' => 'view bean page',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean revisions'.
  $permissions['view bean revisions'] = array(
    'name' => 'view bean revisions',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view bean usage'.
  $permissions['view bean usage'] = array(
    'name' => 'view bean usage',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'bean_usage',
  );

  // Exported permission: 'view date repeats'.
  $permissions['view date repeats'] = array(
    'name' => 'view date repeats',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'date_repeat_field',
  );

  // Exported permission: 'view files'.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own files'.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own individual_profile profile'.
  $permissions['view own individual_profile profile'] = array(
    'name' => 'view own individual_profile profile',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
      'membership individual' => 'membership individual',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own organization_profile profile'.
  $permissions['view own organization_profile profile'] = array(
    'name' => 'view own organization_profile profile',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
      'membership organization' => 'membership organization',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own private files'.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view own supporter_profile profile'.
  $permissions['view own supporter_profile profile'] = array(
    'name' => 'view own supporter_profile profile',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
      'membership supporter' => 'membership supporter',
    ),
    'module' => 'profile2',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'Admin' => 'Admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view private files'.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view scheduled content'.
  $permissions['view scheduled content'] = array(
    'name' => 'view scheduled content',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Admin' => 'Admin',
      'Redakteur' => 'Redakteur',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'system',
  );

  // Exported permission: 'view unpublished taxonomy terms'.
  $permissions['view unpublished taxonomy terms'] = array(
    'name' => 'view unpublished taxonomy terms',
    'roles' => array(
      'Admin' => 'Admin',
      'Manager' => 'Manager',
      'Redakteur' => 'Redakteur',
    ),
    'module' => 'termstatus',
  );

  return $permissions;
}
