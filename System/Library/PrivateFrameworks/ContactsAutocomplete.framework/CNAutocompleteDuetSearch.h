/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteSearch.h>

@class _CDPeopleSuggester, CNContactStore, NSString;

@interface CNAutocompleteDuetSearch : NSObject <CNAutocompleteSearch> {

	_CDPeopleSuggester* _peopleSuggester;
	CNContactStore* _contactStore;

}

@property (nonatomic,readonly) _CDPeopleSuggester * peopleSuggester;              //@synthesize peopleSuggester=_peopleSuggester - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                     //@synthesize contactStore=_contactStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureContext:(id)arg1 withFetchRequest:(id)arg2 ;
+(void)configureSettings:(id)arg1 withFetchRequest:(id)arg2 ;
+(id)constrainMechanismsForSearchType:(unsigned long long)arg1 ;
+(unsigned long long)predictedResultLimit;
-(id)init;
-(_CDPeopleSuggester *)peopleSuggester;
-(CNContactStore *)contactStore;
-(id)initWithPeopleSuggester:(id)arg1 ;
-(id)initWithPeopleSuggester:(id)arg1 contactStore:(id)arg2 ;
-(id)suggesterContextForFetchRequest:(id)arg1 ;
-(id)suggesterSettingsForFetchRequest:(id)arg1 ;
-(id)autocompleteResultsFromSuggesterResults:(id)arg1 factory:(id)arg2 ;
-(id)resultValueForCDContact:(id)arg1 ;
-(long long)addressTypeForCDContact:(id)arg1 ;
-(id)executeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

