/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <UIKit/UIView.h>

@class NSTimer, UILabel, UIPDFDocument, NSMutableSet;

@interface UIPDFWidget : UIView {

	int queueIndex;
	int queueCount;
	SCD_Struct_UI0 queueData[60];
	int currentPageCount;
	int totalPageCount;
	int renderJobsCount;
	NSTimer* heartbeatTimer;
	UILabel* infoLabel;
	UIPDFDocument* activeDocument;
	NSMutableSet* trackedPages;

}
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withDocument:(id)arg2 ;
-(void)addedPageView:(int)arg1 ;
-(void)removedPageView:(int)arg1 ;
-(void)heartbeat;
@end

