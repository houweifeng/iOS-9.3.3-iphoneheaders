/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertManagerDelegate.h>
#import <SpringBoard/SBAlertManagerObserver.h>
#import <SpringBoard/SBAlertObserver.h>
#import <UIKit/UIStatusBarStyleDelegate.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <SpringBoard/AVExternalDeviceDelegate.h>
#import <SpringBoard/FBWindowContextManagerObserver.h>
#import <SpringBoard/SBStarkIconControllerDelegate.h>
#import <SpringBoard/SBWorkspaceSlaving.h>
#import <SpringBoard/SBStarkWindowDelegate.h>

@protocol SBDisplay, SBStarkScreenControllerDelegate;
@class SBStarkSessionConfiguration, FBSDisplay, UIScreen, SBCarDisplaySettings, NSMutableOrderedSet, NSMapTable, NSHashTable, SBStarkLockOutViewController, SBStarkLockOutWindow, FBDisplayLayoutElement, SBStarkAnimationWindow, FBScene, SBStarkNowPlayingController, SBStarkNowPlayingWindow, SBStarkIconController, SBStarkIconWindow, SBStarkStatusBarViewController, SBStarkStatusBarWindow, SBStarkNotificationWindow, SBAssistantWindow, SBAlertManager, SBStarkSystemGestureManager, SBStarkScreenFocusController, SBStarkFakeIconOperationController, AVExternalDevice, NSMutableSet, SBWindow, UIWindow, SBStarkNotificationViewController, NSString;

@interface SBStarkScreenController : NSObject <SBAlertManagerDelegate, SBAlertManagerObserver, SBAlertObserver, UIStatusBarStyleDelegate, _UISettingsKeyObserver, AVExternalDeviceDelegate, FBWindowContextManagerObserver, SBStarkIconControllerDelegate, SBWorkspaceSlaving, SBStarkWindowDelegate> {

	SBStarkSessionConfiguration* _configuration;
	FBSDisplay* _fbsDisplay;
	UIScreen* _screen;
	SBCarDisplaySettings* _settings;
	id<SBDisplay> _actualTopDisplay;
	id<SBDisplay> _effectiveTopDisplay;
	NSMutableOrderedSet* _alertSheets;
	NSMapTable* _alertSheetsToWindowMap;
	NSHashTable* _observers;
	BOOL _connected;
	long long _screenState;
	long long _lockOutMode;
	BOOL _delayUpdatingLockOutMode;
	SBStarkLockOutViewController* _lockOutViewController;
	SBStarkLockOutWindow* _lockOutWindow;
	FBDisplayLayoutElement* _lockOutLayoutElement;
	SBStarkAnimationWindow* _animationWindow;
	FBScene* _nowPlayingScene;
	SBStarkNowPlayingController* _nowPlayingController;
	SBStarkNowPlayingWindow* _nowPlayingWindow;
	BOOL _showingNowPlaying;
	SBStarkIconController* _iconController;
	SBStarkIconWindow* _iconWindow;
	SBStarkStatusBarViewController* _statusBarViewController;
	SBStarkStatusBarWindow* _statusBarWindow;
	SBStarkNotificationWindow* _notificationWindow;
	SBAssistantWindow* _siriWindow;
	long long _siriState;
	SBAlertManager* _alertManager;
	SBStarkSystemGestureManager* _systemGestureManager;
	id _alertBorrowScreenToken;
	id _siriBorrowScreenToken;
	SBStarkScreenFocusController* _focusController;
	SBStarkFakeIconOperationController* _fakeIconOperationController;
	AVExternalDevice* _externalDevice;
	BOOL _externalDeviceScreenAvailable;
	FBDisplayLayoutElement* _oemScreenLayoutElement;
	unsigned _sessionStartBatteryLevel;
	BOOL _sessionStartBatteryLevelIsSet;
	NSMutableSet* _acBackDisabledReasons;
	id<SBStarkScreenControllerDelegate> _delegate;

}

@property (nonatomic,readonly) id<SBStarkSessionConfiguring> sessionConfiguration;                      //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) UIScreen * screen;                                                       //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) FBSDisplay * fbsDisplay;                                                 //@synthesize fbsDisplay=_fbsDisplay - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) SBAlertManager * alertManager;                                           //@synthesize alertManager=_alertManager - In the implementation block
@property (nonatomic,readonly) SBWindow * animationWindow; 
@property (nonatomic,readonly) UIWindow * focusWindow; 
@property (nonatomic,readonly) SBWindow * iconWindow; 
@property (nonatomic,readonly) SBWindow * lockoutWindow; 
@property (nonatomic,readonly) SBStarkIconController * iconController; 
@property (nonatomic,readonly) SBStarkNotificationViewController * notificationController; 
@property (nonatomic,readonly) SBStarkStatusBarViewController * statusBarController; 
@property (nonatomic,readonly) SBStarkSystemGestureManager * systemGestureManager;                      //@synthesize systemGestureManager=_systemGestureManager - In the implementation block
@property (nonatomic,retain,readonly) id<SBDisplay> actualTopDisplay; 
@property (nonatomic,retain,readonly) id<SBDisplay> effectiveTopDisplay; 
@property (getter=isShowingNowPlaying,nonatomic,readonly) BOOL showNowPlaying;                          //@synthesize showingNowPlaying=_showingNowPlaying - In the implementation block
@property (assign,nonatomic,__weak) id<SBStarkScreenControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_launchNowPlaying;
-(void)handleACHomeUp;
-(UIWindow *)focusWindow;
-(SBAlertManager *)alertManager;
-(id)master:(id)arg1 slaveTransactionsForTransitionRequest:(id)arg2 ;
-(id<SBDisplay>)actualTopDisplay;
-(CGRect)sceneFrameForAlerts:(id)arg1 ;
-(double)sceneLevelForAlerts;
-(BOOL)alertManager:(id)arg1 shouldDeactivateDismissedAlert:(id)arg2 ;
-(id)alertManager:(id)arg1 newAlertWindowForScene:(id)arg2 ;
-(void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3 ;
-(void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(BOOL)arg3 ;
-(void)alertManager:(id)arg1 didCreateAlertWindow:(id)arg2 ;
-(void)alertManager:(id)arg1 willTearDownAlertWindow:(id)arg2 ;
-(void)alertBannerSuppressionChanged:(id)arg1 ;
-(void)handleLongBackPress;
-(id<SBDisplay>)effectiveTopDisplay;
-(void)updateStatusBarStateForDisplay:(id)arg1 withAnimationFactory:(id)arg2 ;
-(BOOL)isShowingNowPlaying;
-(void)handleUnhandledBack;
-(SBStarkIconController *)iconController;
-(SBWindow *)animationWindow;
-(SBStarkStatusBarViewController *)statusBarController;
-(SBStarkNotificationViewController *)notificationController;
-(id)animationWindowForIconController:(id)arg1 ;
-(void)handleBackPress;
-(void)setEffectiveTopDisplay:(id)arg1 forStarkTrigger:(BOOL)arg2 withAnimationFactory:(id)arg3 ;
-(id)nowPlayingContextHostManager;
-(void)dismissSiriWithAnimation:(long long)arg1 factory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_viewController:(id)arg1 willAnimateAppearanceWithContext:(id)arg2 ;
-(void)_viewController:(id)arg1 animateAppearanceWithContext:(id)arg2 ;
-(void)_viewController:(id)arg1 willAnimateDisappearanceWithContext:(id)arg2 ;
-(void)_viewController:(id)arg1 animateDisappearanceWithContext:(id)arg2 ;
-(BOOL)presentSiri:(BOOL)arg1 viewController:(id)arg2 ;
-(id)nowPlayingSnapshot;
-(void)starkWindowDidTriggerUnhandledBack:(id)arg1 ;
-(SBWindow *)iconWindow;
-(void)notifyWhenNowPlayingIsActive:(/*^block*/id)arg1 withTimeout:(double)arg2 ;
-(void)_updatePairingStatus;
-(void)_updateLockOutMode;
-(void)_alertSheetPresented:(id)arg1 ;
-(void)_alertSheetDismissed:(id)arg1 ;
-(void)_externalDeviceScreenBecameAvailable:(id)arg1 ;
-(void)_lowPowerBatteryLevelChanged:(id)arg1 ;
-(void)_tearDownAndInvalidate:(BOOL)arg1 ;
-(void)_tearDownSceneManagerIfAppropriate;
-(void)_didChangeFromState:(long long)arg1 ;
-(void)setEffectiveTopDisplay:(id)arg1 actualTopDisplay:(id)arg2 forStarkTrigger:(BOOL)arg3 withAnimationFactory:(id)arg4 ;
-(void)_setACBackEnabled:(BOOL)arg1 forRequester:(id)arg2 ;
-(void)_toggleNotificationSuspendedState;
-(void)_toggleNowPlayingVisible:(BOOL)arg1 ;
-(void)_takeScreenIfNecessaryForTopDisplayActivation;
-(void)_handleMenuEventAndTakeScreen:(BOOL)arg1 ;
-(void)_handleSuspendTopMost;
-(void)_setSiriState:(long long)arg1 ;
-(void)_dismissSiriWithFactory:(id)arg1 animations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_hideWindowsForSetup:(BOOL)arg1 ;
-(CGRect)_defaultScreenFrameOffsetForStatusBar:(id)arg1 ;
-(void)_updateAlertSheetFocus;
-(id)_newNowPlayingScene;
-(void)_createFakeIconOperationController;
-(BOOL)_allowInCallOverrideStyle;
-(BOOL)_allowNavigationOverrideStyle;
-(void)_collectCarPlayDiagnostics;
-(BOOL)_isACBackEnabled;
-(SBWindow *)lockoutWindow;
-(void)setNowPlayingForWorkspaceApplication:(id)arg1 ;
-(void)handleUncompletedAppLaunchWithStarkTrigger:(BOOL)arg1 ;
-(void)cleanupForTopDisplayIfNecessaryWithAnimationFactory:(id)arg1 ;
-(void)_noteInitializationCompleted;
-(void)_noteConnectSetupCompleted;
-(void)_noteDisconnectCompleted;
-(SBStarkSystemGestureManager *)systemGestureManager;
-(void)setDelegate:(id<SBStarkScreenControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<SBStarkScreenControllerDelegate>)delegate;
-(long long)state;
-(void)invalidate;
-(void)addObserver:(id)arg1 ;
-(FBSDisplay *)fbsDisplay;
-(UIScreen *)screen;
-(long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(int)arg3 ;
-(void)statusBar:(id)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5 ;
-(void)statusBar:(id)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4 ;
-(void)removeObserver:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3 ;
-(void)iOSUIRequestedForApplicationURL:(id)arg1 ;
-(void)siriRequestedWithAction:(long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)windowContextManagerWillStartTrackingContexts:(id)arg1 ;
-(void)windowContextManagerDidStopTrackingContexts:(id)arg1 ;
-(id<SBStarkSessionConfiguring>)sessionConfiguration;
-(void)_externalDeviceScreenBecameUnavailable:(id)arg1 ;
@end

