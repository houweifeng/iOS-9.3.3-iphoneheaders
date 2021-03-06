/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MSVSystemDialogResponse : NSObject {

	long long _buttonIdentifier;
	NSArray* _textFieldValues;

}

@property (nonatomic,readonly) long long buttonIdentifier;              //@synthesize buttonIdentifier=_buttonIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * textFieldValues;               //@synthesize textFieldValues=_textFieldValues - In the implementation block
-(NSArray *)textFieldValues;
-(id)description;
-(id)initWithIdentifier:(long long)arg1 textFieldValues:(id)arg2 ;
-(long long)buttonIdentifier;
@end

