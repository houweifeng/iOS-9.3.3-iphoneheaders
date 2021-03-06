/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDCanvasDelegate.h>
#import <iWorkImport/TSKSearchCanvasDelegate.h>

@class TSKDocumentRoot, TSDCanvas, NSString;

@interface TSASearchCanvasDelegate : NSObject <TSDCanvasDelegate, TSKSearchCanvasDelegate> {

	TSKDocumentRoot* mDocumentRoot;
	TSDCanvas* mCanvas;

}

@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDocumentRoot:(id)arg1 canvas:(id)arg2 ;
-(id)canvasSelectionPathForInfo:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(TSDCanvas *)canvas;
-(id)documentRoot;
@end

