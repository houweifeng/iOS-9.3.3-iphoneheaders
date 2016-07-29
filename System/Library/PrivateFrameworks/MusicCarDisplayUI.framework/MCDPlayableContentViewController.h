/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class MCDPCModel, MCDPCContainer, NSArray, NSString;

@interface MCDPlayableContentViewController : UINavigationController <UINavigationControllerDelegate> {

	MCDPCModel* _model;
	MCDPCContainer* _rootContainer;
	NSArray* _stackToRebuild;
	BOOL _hasBrowsableContent;
	BOOL _hasLoaded;
	NSString* _bundleID;

}

@property (nonatomic,copy,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(NSString *)bundleID;
-(void)_setupView;
-(id)initWithBundleID:(id)arg1 ;
-(void)_modelWillInvalidate:(id)arg1 ;
-(void)_modelDidInvalidate:(id)arg1 ;
-(void)_browsableContentEndpointChangedNotification:(id)arg1 ;
-(id)initWithBundleID:(id)arg1 stack:(id)arg2 ;
-(id)_createRootViewController;
-(void)_checkAndSetupView;
-(void)_populateStack;
-(void)_updateStackForPlaying:(BOOL)arg1 ;
-(void)refreshNavigationStackForLaunch;
-(id)currentStack;
@end
