/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface HLPHelpLocale : NSObject {

	NSString* _path;
	NSArray* _isoCodes;

}

@property (nonatomic,copy) NSString * path;                 //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSArray * isoCodes;              //@synthesize isoCodes=_isoCodes - In the implementation block
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSArray *)isoCodes;
-(void)setIsoCodes:(NSArray *)arg1 ;
@end

