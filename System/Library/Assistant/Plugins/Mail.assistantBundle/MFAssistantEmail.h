/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Mail.assistantBundle/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAEmailEmail.h>

@interface MFAssistantEmail : SAEmailEmail {

	unsigned long long _statusFlags;

}

@property (assign,nonatomic) unsigned long long statusFlags;              //@synthesize statusFlags=_statusFlags - In the implementation block
+(int)MSSendTypeForSAEMailType:(id)arg1 ;
-(unsigned long long)statusFlags;
-(void)setStatusFlags:(unsigned long long)arg1 ;
@end

