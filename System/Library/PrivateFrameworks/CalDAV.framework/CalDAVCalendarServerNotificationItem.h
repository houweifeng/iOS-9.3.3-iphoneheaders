/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVLeafItem, CoreDAVItem;

@interface CalDAVCalendarServerNotificationItem : CoreDAVItem {

	CoreDAVLeafItem* _dtstamp;
	CoreDAVItem* _content;

}

@property (nonatomic,retain) CoreDAVLeafItem * dtstamp;              //@synthesize dtstamp=_dtstamp - In the implementation block
@property (nonatomic,retain) CoreDAVItem * content;                  //@synthesize content=_content - In the implementation block
-(id)init;
-(CoreDAVItem *)content;
-(void)setContent:(CoreDAVItem *)arg1 ;
-(id)copyParseRules;
-(void)setDtstamp:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVLeafItem *)dtstamp;
@end

