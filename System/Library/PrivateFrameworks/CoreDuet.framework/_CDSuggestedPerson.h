/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactProperty, _CDContact, NSArray;

@interface _CDSuggestedPerson : NSObject {

	CNContactProperty* _contactProperty;
	_CDContact* _contact;
	double _rank;
	double _score;
	NSArray* _interactions;

}

@property (retain) CNContactProperty * contactProperty;              //@synthesize contactProperty=_contactProperty - In the implementation block
@property (retain) _CDContact * contact;                             //@synthesize contact=_contact - In the implementation block
@property (assign) double rank;                                      //@synthesize rank=_rank - In the implementation block
@property (assign) double score;                                     //@synthesize score=_score - In the implementation block
@property (retain) NSArray * interactions;                           //@synthesize interactions=_interactions - In the implementation block
-(id)description;
-(void)setInteractions:(NSArray *)arg1 ;
-(void)setContactProperty:(CNContactProperty *)arg1 ;
-(NSArray *)interactions;
-(void)setScore:(double)arg1 ;
-(void)setRank:(double)arg1 ;
-(double)rank;
-(CNContactProperty *)contactProperty;
-(_CDContact *)contact;
-(void)setContact:(_CDContact *)arg1 ;
-(double)score;
@end
