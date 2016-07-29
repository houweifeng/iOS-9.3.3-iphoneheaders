/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:36 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/BulletinBoardPlugins/NotifyWiFi.bundle/NotifyWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotifyWiFi/NotifyWiFi-Structs.h>
#import <SpringBoardUIServices/_SBUIWidgetViewController.h>
#import <libobjc.A.dylib/BBDataProvider.h>

@class BBBulletinRequest, NSString;

@interface NotifyWiFiViewController : _SBUIWidgetViewController <BBDataProvider> {

	BBBulletinRequest* bulletin;
	NSString* currentNet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedProvider;
+(void)initialize;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(id)sortDescriptors;
-(CGSize)preferredViewSize;
-(void)hostDidPresent;
-(void)hostDidDismiss;
-(id)sectionIdentifier;
-(id)bulletinsFilteredBy:(unsigned)arg1 count:(unsigned)arg2 lastCleared:(id)arg3 ;
-(id)defaultSectionInfo;
-(id)sectionDisplayName;
@end
