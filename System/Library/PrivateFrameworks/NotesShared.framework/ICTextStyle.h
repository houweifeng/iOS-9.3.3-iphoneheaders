/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface ICTextStyle : NSObject {

	unsigned _ttStyle;
	NSDictionary* _attributes;
	NSString* _name;

}

@property (retain) NSDictionary * attributes;                                //@synthesize attributes=_attributes - In the implementation block
@property (retain) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (assign) unsigned ttStyle;                                         //@synthesize ttStyle=_ttStyle - In the implementation block
@property (nonatomic,readonly) NSString * icaxStyleDescription; 
+(unsigned)noteDefaultNamedStyle;
+(unsigned)validatedNamedStyle:(unsigned)arg1 ;
+(id)defaultTextStyles;
+(void)setNoteDefaultNamedStyle:(unsigned)arg1 ;
+(id)titleForNamedStyle:(unsigned)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setTtStyle:(unsigned)arg1 ;
-(unsigned)ttStyle;
-(NSString *)icaxStyleDescription;
@end
