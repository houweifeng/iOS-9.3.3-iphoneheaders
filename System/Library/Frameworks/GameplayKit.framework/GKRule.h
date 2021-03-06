/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GKRule : NSObject {

	long long _salience;

}

@property (assign,nonatomic) long long salience;              //@synthesize salience=_salience - In the implementation block
+(id)ruleWithPredicate:(id)arg1 assertingFact:(id)arg2 grade:(float)arg3 ;
+(id)ruleWithPredicate:(id)arg1 retractingFact:(id)arg2 grade:(float)arg3 ;
+(id)ruleWithBlockPredicate:(/*^block*/id)arg1 action:(/*^block*/id)arg2 ;
-(BOOL)evaluatePredicateWithSystem:(id)arg1 ;
-(void)performActionWithSystem:(id)arg1 ;
-(long long)salience;
-(void)setSalience:(long long)arg1 ;
@end

