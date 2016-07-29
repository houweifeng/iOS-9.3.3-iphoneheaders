/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SKComposeReviewDelegate, SKUIServiceComposeReviewViewController;
@class _UIAsyncInvocation, NSURL, SKRemoteComposeReviewViewController, SKInvocationQueueProxy;

@interface SKComposeReviewViewController : UIViewController {

	_UIAsyncInvocation* _cancelRequest;
	NSURL* _compositionURL;
	id<SKComposeReviewDelegate> _delegate;
	/*^block*/id _prepareBlock;
	SKRemoteComposeReviewViewController* _remoteViewController;
	SKInvocationQueueProxy*<SKUIServiceComposeReviewViewController> _serviceProxy;

}

@property (assign,nonatomic) id<SKComposeReviewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SKComposeReviewDelegate>)arg1 ;
-(void)dealloc;
-(id<SKComposeReviewDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_addRemoteView;
-(void)_requestRemoteViewController;
-(void)_didPrepareWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_didFinishWithResult:(BOOL)arg1 error:(id)arg2 ;
-(void)_tearDownAfterError:(id)arg1 ;
-(id)initWithCompositionURL:(id)arg1 ;
-(void)prepareWithCompletionBlock:(/*^block*/id)arg1 ;
@end
