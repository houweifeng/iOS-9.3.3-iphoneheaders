/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIInputViewController.h>
#import <UIKit/_UIKBDelegateAwareInputController.h>

@class UIKeyboardInputMode, UIKeyboard, UIViewController, UIView, NSString;

@interface UICompatibilityInputViewController : UIInputViewController <_UIKBDelegateAwareInputController> {

	UIKeyboardInputMode* _inputMode;
	UIKeyboard* _deferredSystemView;
	UIKeyboardInputMode* _incomingExtensionInputMode;
	double _incomingExtensionInputModeTime;
	double _lastSuspendedTime;
	BOOL _shouldRegenerateSizingConstraints;
	BOOL _shouldSuppressRemoteInputController;
	UIViewController* _inputController;
	UIView* _inputControllerSnapshot;

}

@property (nonatomic,retain) UIViewController * inputController;              //@synthesize inputController=_inputController - In the implementation block
@property (nonatomic,retain) UIView * inputControllerSnapshot;                //@synthesize inputControllerSnapshot=_inputControllerSnapshot - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)inputViewControllerWithView:(id)arg1 ;
+(id)deferredInputModeControllerWithKeyboard:(id)arg1 ;
+(BOOL)_requiresProxyInterface;
-(void)dealloc;
-(UIViewController *)inputController;
-(void)setInputController:(UIViewController *)arg1 ;
-(void)loadView;
-(id)preferredFocusedItem;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setInputMode:(id)arg1 ;
-(void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2 ;
-(id)_compatibilityController;
-(void)assertCurrentInputModeIfNecessary;
-(id)_keyboard;
-(void)didSuspend:(id)arg1 ;
-(void)willResume:(id)arg1 ;
-(void)switchToCurrentSystemInputMode;
-(void)rebuildChildConstraints;
-(void)generateCompatibleSizeConstraintsIfNecessary;
-(id)_initAsDeferredController;
-(void)tearDownInputController;
-(void)shouldUpdateInputMode:(id)arg1 ;
-(void)removeSnapshotView;
-(id)_compatView;
-(UIView *)inputControllerSnapshot;
-(void)setInputControllerSnapshot:(UIView *)arg1 ;
-(void)snapshotCurrentDisplay;
-(id)_systemViewControllerForInputMode:(id)arg1 ;
-(id)childCompatibilityController;
-(id)_keyboardForThisViewController;
-(void)willBeginTranslation;
-(void)finishSplitTransition:(BOOL)arg1 ;
-(void)didFinishTranslation;
@end

