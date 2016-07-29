/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNVCardEncoding : NSObject {

	NSString* _name;
	unsigned long long _stringEncoding;

}

@property (readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long stringEncoding;              //@synthesize stringEncoding=_stringEncoding - In the implementation block
+(id)standardEncodings;
+(id)encodingsFromUserDefaults;
+(id)utf8Encoding;
+(id)asciiEncoding;
+(id)isoLatin1Encoding;
+(id)macRomanEncoding;
+(id)preferredEncodingInUserDefaults;
+(id)addPreferredEncoding:(id)arg1 toEncodings:(id)arg2 ;
+(id)encodingWithName:(id)arg1 stringEncoding:(unsigned long long)arg2 ;
-(NSString *)name;
-(unsigned long long)stringEncoding;
-(id)initWithName:(id)arg1 stringEncoding:(unsigned long long)arg2 ;
@end
