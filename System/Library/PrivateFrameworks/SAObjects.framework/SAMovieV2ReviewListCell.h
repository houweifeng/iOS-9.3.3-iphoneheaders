/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:47 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate;

@interface SAMovieV2ReviewListCell : SADomainObject

@property (nonatomic,copy) NSString * reviewAuthor; 
@property (nonatomic,copy) NSDate * reviewDate; 
@property (nonatomic,copy) NSString * reviewText; 
+(id)reviewListCell;
+(id)reviewListCellWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSDate *)reviewDate;
-(void)setReviewDate:(NSDate *)arg1 ;
-(NSString *)reviewText;
-(NSString *)reviewAuthor;
-(void)setReviewAuthor:(NSString *)arg1 ;
-(void)setReviewText:(NSString *)arg1 ;
-(id)encodedClassName;
@end

