/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBSoftwareUpdateDefaults : SBAbstractSpringBoardDefaultDomain

@property (getter=hasDeveloperInstallBrickAlertShown3DayWarning, nonatomic) BOOL developerInstallBrickAlertShown3DayWarning;
@property (getter=hasDeveloperInstallBrickAlertShown7DayWarning, nonatomic) BOOL developerInstallBrickAlertShown7DayWarning;
@property (getter=hasDeveloperInstallBrickAlertShownTomorrowWarning, nonatomic) BOOL developerInstallBrickAlertShownTomorrowWarning;
@property (nonatomic, retain) NSString *lastOSVersion;
@property (nonatomic, retain) NSDictionary *softwareUpdateState;

- (void)_bindAndRegisterDefaults;
- (void)clearDeveloperInstallBrickAlerts;
- (void)clearLegacyBadgePreference;

@end
