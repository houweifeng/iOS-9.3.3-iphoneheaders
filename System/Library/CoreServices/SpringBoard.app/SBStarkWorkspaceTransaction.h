/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBWorkspaceTransaction.h>
#import <SpringBoard/SBAlertManagerObserver.h>

@class FBDisplayLayoutTransition, SBStarkScreenController, SBAlertManager, NSString;

@interface SBStarkWorkspaceTransaction : SBWorkspaceTransaction <SBAlertManagerObserver> {

	FBDisplayLayoutTransition* _rootLayoutTransition;
	SBStarkScreenController* _starkScreenController;
	SBAlertManager* _starkScreenAlertManager;

}

@property (nonatomic,readonly) SBStarkScreenController * starkScreenController;              //@synthesize starkScreenController=_starkScreenController - In the implementation block
@property (nonatomic,readonly) SBAlertManager * starkScreenAlertManager;                     //@synthesize starkScreenAlertManager=_starkScreenAlertManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTransitionRequest:(id)arg1 ;
-(SBStarkScreenController *)starkScreenController;
-(SBAlertManager *)starkScreenAlertManager;
-(void)_willBegin;
-(void)dealloc;
-(void)_didComplete;
@end
