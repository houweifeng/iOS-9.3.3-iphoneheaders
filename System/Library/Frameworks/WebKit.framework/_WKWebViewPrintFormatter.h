/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIViewPrintFormatter.h>

@class _WKFrameHandle, WKWebView;

@interface _WKWebViewPrintFormatter : UIViewPrintFormatter {

	double _totalScaleFactor;
	PrintInfo _printInfo;
	_WKFrameHandle* _frameToPrint;

}

@property (nonatomic,retain) _WKFrameHandle * frameToPrint;              //@synthesize frameToPrint=_frameToPrint - In the implementation block
@property (nonatomic,readonly) WKWebView * webView; 
-(void)dealloc;
-(WKWebView *)webView;
-(long long)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(_WKFrameHandle *)frameToPrint;
-(void)setFrameToPrint:(_WKFrameHandle *)arg1 ;
@end
