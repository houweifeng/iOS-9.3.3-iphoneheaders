/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebView, WebNodeHighlight;

@interface WebNodeHighlighter : NSObject {

	WebView* _inspectedWebView;
	WebNodeHighlight* _currentHighlight;

}
-(id)initWithInspectedWebView:(id)arg1 ;
-(void)hideHighlight;
-(void)didAttachWebNodeHighlight:(id)arg1 ;
-(void)willDetachWebNodeHighlight:(id)arg1 ;
-(void)dealloc;
-(void)highlight;
@end
