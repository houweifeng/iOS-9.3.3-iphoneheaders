/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFSafariExtensionEventsListener.h>

@protocol SFSharingExtensionWebProcessController;
@class WKWebView, _WKRemoteObjectInterface, NSMutableDictionary, NSTimer, NSString;

@interface _SFSafariSharingExtensionController : NSObject <SFSafariExtensionEventsListener> {

	WKWebView* _webView;
	id<SFSharingExtensionWebProcessController> _extensionControllerProxy;
	_WKRemoteObjectInterface* _extensionEventListenerInterface;
	NSMutableDictionary* _replyIdentifierToCompletionMap;
	NSTimer* _expirationTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWebView:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)runJavaScriptForSharingExtension:(id)arg1 javaScript:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)finalizeJavaScriptForSharingExtension:(id)arg1 arguments:(id)arg2 ;
-(void)didEvaluateJavaScriptForSharingExtensionWithResult:(id)arg1 replyIdentifier:(id)arg2 ;
-(void)_setUpExtensionEventsListenerInterface;
-(void)_invalidateExpirationTimer;
-(void)_expirationTimerFired:(id)arg1 ;
-(void)_evaluateJavaScriptFinishedWithResult:(id)arg1 replyIdentifier:(id)arg2 error:(id)arg3 ;
-(id)_extensionControllerProxy;
-(void)_startExpirationTimerForReplyIdentifier:(id)arg1 ;
@end

