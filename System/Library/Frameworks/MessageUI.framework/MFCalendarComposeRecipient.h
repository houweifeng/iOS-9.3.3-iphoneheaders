/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFComposeRecipient.h>

@class NSString;

@interface MFCalendarComposeRecipient : MFComposeRecipient {

	NSString* _calAttendeeName;
	id _participant;

}

@property (nonatomic,retain) id participant; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)displayString;
-(id)participant;
-(void)setCalAttendeeName:(id)arg1 ;
-(void)setParticipant:(id)arg1 ;
-(id)initWithComposeRecipient:(id)arg1 ;
@end
