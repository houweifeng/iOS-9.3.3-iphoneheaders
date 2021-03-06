/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBApplicationInfo.h>

@class NSArray, NSString, NSDictionary, NSSet;

@interface SBApplicationInfo : FBApplicationInfo {

	NSArray* _staticShortcutItems;
	NSString* _displayName;
	NSString* _carDisplayName;
	NSArray* _tags;
	unsigned long long _visibilityOverride;
	long long _defaultWallpaperStyle;
	long long _defaultStatusBarStyle;
	int _ignoredStatusBarStyleOverrides;
	int _networkUsageTypes;
	Class _iconClass;
	NSDictionary* _customSpotlightIconPaths;
	NSDictionary* _searchDomainLaunchInfo;
	unsigned long long _uninstallCapability;
	int _carPlayLaunchModes;
	NSSet* _carPlayProtocols;
	long long _defaultCarPlayStatusBarStyle;
	int _supportedTypes;
	NSArray* _domainsToPreheat;
	NSArray* _launchImageInfo;
	NSArray* _urlTypes;
	BOOL _isSystemApplication;
	BOOL _isInternalApplication;
	BOOL _isWatchApp;
	BOOL _isLaunchableDuringSetup;
	BOOL _usesSplashBoard;
	BOOL _disablesClassicMode;
	BOOL _isMonarchLinked;
	BOOL _prefersSavedSnapshots;
	BOOL _behavesAsCaller;
	BOOL _wantsLaunchWithoutPNG;
	BOOL _wantsFullScreen;
	BOOL _hasViewServiceEntitlement;
	BOOL _canChangeWallpaperStyle;
	BOOL _isGameCenterEnabled;
	BOOL _wasGameCenterEverEnabled;
	BOOL _statusBarIsLegacy;
	BOOL _appSuspendingUnsupported;
	BOOL _requiresHiDPI;
	BOOL _disablesScreenJail;
	BOOL _isCloudKitEnabled;
	BOOL _alwaysLaunchesSuspended;
	BOOL _requiresPasscodeIfLaunchedBeforeFirstUnlock;
	BOOL _systemAppSupportsLocalNotifications;
	long long _whitePointAdaptivityStyle;
	NSDictionary* _customSpotlightIconInfo;

}

@property (getter=isSystemApplication,nonatomic,readonly) BOOL systemApplication;                            //@synthesize isSystemApplication=_isSystemApplication - In the implementation block
@property (getter=isInternalApplication,nonatomic,readonly) BOOL internalApplication;                        //@synthesize isInternalApplication=_isInternalApplication - In the implementation block
@property (nonatomic,readonly) NSArray * staticShortcutItems;                                                //@synthesize staticShortcutItems=_staticShortcutItems - In the implementation block
@property (getter=isWatchApp,nonatomic,readonly) BOOL watchApp;                                              //@synthesize isWatchApp=_isWatchApp - In the implementation block
@property (getter=isLaunchableDuringSetup,nonatomic,readonly) BOOL launchableDuringSetup;                    //@synthesize isLaunchableDuringSetup=_isLaunchableDuringSetup - In the implementation block
@property (nonatomic,readonly) BOOL usesSplashBoard;                                                         //@synthesize usesSplashBoard=_usesSplashBoard - In the implementation block
@property (nonatomic,readonly) BOOL disablesClassicMode;                                                     //@synthesize disablesClassicMode=_disablesClassicMode - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                                                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * carDisplayName;                                               //@synthesize carDisplayName=_carDisplayName - In the implementation block
@property (nonatomic,readonly) NSArray * tags;                                                               //@synthesize tags=_tags - In the implementation block
@property (nonatomic,readonly) unsigned long long visibilityOverride;                                        //@synthesize visibilityOverride=_visibilityOverride - In the implementation block
@property (getter=isMonarchLinked,nonatomic,readonly) BOOL monarchLinked;                                    //@synthesize isMonarchLinked=_isMonarchLinked - In the implementation block
@property (nonatomic,readonly) BOOL prefersSavedSnapshots;                                                   //@synthesize prefersSavedSnapshots=_prefersSavedSnapshots - In the implementation block
@property (nonatomic,readonly) BOOL behavesAsCaller;                                                         //@synthesize behavesAsCaller=_behavesAsCaller - In the implementation block
@property (nonatomic,readonly) BOOL wantsLaunchWithoutPNG;                                                   //@synthesize wantsLaunchWithoutPNG=_wantsLaunchWithoutPNG - In the implementation block
@property (nonatomic,readonly) BOOL wantsFullScreen;                                                         //@synthesize wantsFullScreen=_wantsFullScreen - In the implementation block
@property (nonatomic,readonly) BOOL hasViewServiceEntitlement;                                               //@synthesize hasViewServiceEntitlement=_hasViewServiceEntitlement - In the implementation block
@property (nonatomic,readonly) long long defaultWallpaperStyle;                                              //@synthesize defaultWallpaperStyle=_defaultWallpaperStyle - In the implementation block
@property (nonatomic,readonly) BOOL canChangeWallpaperStyle;                                                 //@synthesize canChangeWallpaperStyle=_canChangeWallpaperStyle - In the implementation block
@property (nonatomic,readonly) long long defaultStatusBarStyle;                                              //@synthesize defaultStatusBarStyle=_defaultStatusBarStyle - In the implementation block
@property (nonatomic,readonly) int ignoredStatusBarStyleOverrides;                                           //@synthesize ignoredStatusBarStyleOverrides=_ignoredStatusBarStyleOverrides - In the implementation block
@property (nonatomic,readonly) int networkUsageTypes;                                                        //@synthesize networkUsageTypes=_networkUsageTypes - In the implementation block
@property (nonatomic,readonly) Class iconClass;                                                              //@synthesize iconClass=_iconClass - In the implementation block
@property (nonatomic,readonly) NSDictionary * customSpotlightIconInfo;                                       //@synthesize customSpotlightIconInfo=_customSpotlightIconInfo - In the implementation block
@property (getter=isGameCenterEnabled,nonatomic,readonly) BOOL gameCenterEnabled;                            //@synthesize isGameCenterEnabled=_isGameCenterEnabled - In the implementation block
@property (nonatomic,readonly) BOOL wasGameCenterEverEnabled;                                                //@synthesize wasGameCenterEverEnabled=_wasGameCenterEverEnabled - In the implementation block
@property (nonatomic,readonly) NSDictionary * searchDomainLaunchInfo;                                        //@synthesize searchDomainLaunchInfo=_searchDomainLaunchInfo - In the implementation block
@property (getter=isAppSuspendingUnsupported,nonatomic,readonly) BOOL appSuspendingUnsupported;              //@synthesize appSuspendingUnsupported=_appSuspendingUnsupported - In the implementation block
@property (nonatomic,readonly) BOOL requiresHiDPI;                                                           //@synthesize requiresHiDPI=_requiresHiDPI - In the implementation block
@property (nonatomic,readonly) BOOL disablesScreenJail;                                                      //@synthesize disablesScreenJail=_disablesScreenJail - In the implementation block
@property (getter=isCloudKitEnabled,nonatomic,readonly) BOOL cloudKitEnabled;                                //@synthesize isCloudKitEnabled=_isCloudKitEnabled - In the implementation block
@property (nonatomic,readonly) BOOL alwaysLaunchesSuspended;                                                 //@synthesize alwaysLaunchesSuspended=_alwaysLaunchesSuspended - In the implementation block
@property (nonatomic,readonly) BOOL requiresPasscodeIfLaunchedBeforeFirstUnlock;                             //@synthesize requiresPasscodeIfLaunchedBeforeFirstUnlock=_requiresPasscodeIfLaunchedBeforeFirstUnlock - In the implementation block
@property (nonatomic,readonly) BOOL systemAppSupportsLocalNotifications;                                     //@synthesize systemAppSupportsLocalNotifications=_systemAppSupportsLocalNotifications - In the implementation block
@property (nonatomic,readonly) unsigned long long uninstallCapability;                                       //@synthesize uninstallCapability=_uninstallCapability - In the implementation block
@property (nonatomic,readonly) int carPlayLaunchModes;                                                       //@synthesize carPlayLaunchModes=_carPlayLaunchModes - In the implementation block
@property (nonatomic,readonly) NSSet * carPlayProtocols;                                                     //@synthesize carPlayProtocols=_carPlayProtocols - In the implementation block
@property (nonatomic,readonly) long long defaultCarPlayStatusBarStyle;                                       //@synthesize defaultCarPlayStatusBarStyle=_defaultCarPlayStatusBarStyle - In the implementation block
@property (nonatomic,readonly) int supportedTypes;                                                           //@synthesize supportedTypes=_supportedTypes - In the implementation block
@property (getter=isStatusBarLegacy,nonatomic,readonly) BOOL statusBarIsLegacy;                              //@synthesize statusBarIsLegacy=_statusBarIsLegacy - In the implementation block
@property (nonatomic,readonly) NSArray * domainsToPreheat;                                                   //@synthesize domainsToPreheat=_domainsToPreheat - In the implementation block
@property (nonatomic,readonly) NSArray * launchImageInfo;                                                    //@synthesize launchImageInfo=_launchImageInfo - In the implementation block
@property (nonatomic,readonly) NSArray * urlTypes;                                                           //@synthesize urlTypes=_urlTypes - In the implementation block
@property (nonatomic,readonly) long long whitePointAdaptivityStyle;                                          //@synthesize whitePointAdaptivityStyle=_whitePointAdaptivityStyle - In the implementation block
-(BOOL)isSystemApplication;
-(BOOL)isLaunchableDuringSetup;
-(BOOL)isInternalApplication;
-(int)supportedTypes;
-(NSArray *)staticShortcutItems;
-(NSDictionary *)customSpotlightIconInfo;
-(BOOL)isAppSuspendingUnsupported;
-(BOOL)alwaysLaunchesSuspended;
-(int)networkUsageTypes;
-(BOOL)behavesAsCaller;
-(BOOL)isWatchApp;
-(BOOL)hasViewServiceEntitlement;
-(BOOL)isCloudKitEnabled;
-(BOOL)wasGameCenterEverEnabled;
-(BOOL)requiresPasscodeIfLaunchedBeforeFirstUnlock;
-(BOOL)wantsLaunchWithoutPNG;
-(Class)iconClass;
-(NSString *)carDisplayName;
-(BOOL)isStatusBarLegacy;
-(int)ignoredStatusBarStyleOverrides;
-(long long)defaultCarPlayStatusBarStyle;
-(BOOL)requiresHiDPI;
-(BOOL)wantsFullScreen;
-(BOOL)isMonarchLinked;
-(BOOL)systemAppSupportsLocalNotifications;
-(BOOL)disablesScreenJail;
-(long long)defaultWallpaperStyle;
-(unsigned long long)uninstallCapability;
-(NSDictionary *)searchDomainLaunchInfo;
-(BOOL)prefersSavedSnapshots;
-(BOOL)disablesClassicMode;
-(BOOL)usesSplashBoard;
-(NSArray *)domainsToPreheat;
-(BOOL)canChangeWallpaperStyle;
-(int)carPlayLaunchModes;
-(NSSet *)carPlayProtocols;
-(void)_reallyParse:(id)arg1 fromBundle:(id)arg2 ;
-(id)_parseNameForBundleAtPath:(id)arg1 infoDictionary:(id)arg2 ;
-(id)_parseStaticShortcutItemsFromInfoDictionary:(id)arg1 bundle:(id)arg2 ;
-(unsigned long long)_parseVisibilityOverride:(id)arg1 ;
-(id)_parseAppTags:(id)arg1 hasVisibilityOverride:(BOOL)arg2 ;
-(int)_parseSupportedTypesFromInfoDictionary:(id)arg1 ;
-(BOOL)_supportsApplicationType:(int)arg1 ;
-(id)_copyApplicationMetadata;
-(id)_parseCarPlayProtocols:(id)arg1 ;
-(long long)_parseCarPlayDefaultStatusBarStyle:(id)arg1 launchModes:(int)arg2 ;
-(unsigned long long)_parseUninstallCapability:(id)arg1 ;
-(BOOL)_isiPad;
-(unsigned long long)visibilityOverride;
-(NSArray *)launchImageInfo;
-(NSArray *)urlTypes;
-(NSArray *)tags;
-(NSString *)displayName;
-(long long)defaultStatusBarStyle;
-(long long)whitePointAdaptivityStyle;
-(BOOL)isGameCenterEnabled;
-(void)_parse:(id)arg1 fromBundle:(id)arg2 ;
@end

