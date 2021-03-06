/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <ContactsUI/ContactsUI-Structs.h>
@class NSMapTable, NSObject, NSArray, CNContactMatchSummarizer, NSMutableAttributedString, CNContactStoreDataSource, CNContactStoreFilter, NSMutableDictionary, NSMutableArray;

@interface CNContactStoreSnapshot : NSObject {

	unsigned long long _contactsCount;
	NSMapTable* _contactsCache;
	NSObject*<OS_dispatch_semaphore> _cacheAccessSemaphore;
	NSRange _currentlyLoadingBackgroundRange;
	NSArray* _sections;
	NSArray* _indexSections;
	CNContactMatchSummarizer* _summarizer;
	NSMutableAttributedString* _emptyExcerptInstanceMarker;
	unsigned long long _lastRequestedIndex;
	CNContactStoreDataSource* _dataSource;
	CNContactStoreFilter* _filter;
	NSMutableDictionary* _contactMatchInfos;
	NSMapTable* _identifiersToIndexPath;
	NSMutableArray* _batchContactIdentifiers;

}

@property (assign,nonatomic,__weak) CNContactStoreDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) CNContactStoreFilter * filter;                             //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,readonly) NSMutableDictionary * contactMatchInfos;                 //@synthesize contactMatchInfos=_contactMatchInfos - In the implementation block
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSArray * indexSections; 
@property (nonatomic,readonly) NSMapTable * identifiersToIndexPath;                     //@synthesize identifiersToIndexPath=_identifiersToIndexPath - In the implementation block
@property (nonatomic,readonly) NSMutableArray * batchContactIdentifiers;                //@synthesize batchContactIdentifiers=_batchContactIdentifiers - In the implementation block
-(void)setDataSource:(CNContactStoreDataSource *)arg1 ;
-(id)init;
-(CNContactStoreDataSource *)dataSource;
-(void)setFilter:(CNContactStoreFilter *)arg1 ;
-(NSArray *)sections;
-(NSArray *)contacts;
-(NSMutableDictionary *)contactMatchInfos;
-(NSArray *)indexSections;
-(id)_keysToFetch;
-(void)_loadAllContacts;
-(void)_loadContactsInRange:(NSRange)arg1 inBackground:(BOOL)arg2 ;
-(void)_generateExcerptsInRange:(NSRange)arg1 ;
-(unsigned long long)countOf_contacts;
-(id)objectIn_contactsAtIndex:(unsigned long long)arg1 ;
-(void)prepareEnoughContacts;
-(void)prepareAllContacts;
-(NSMapTable *)identifiersToIndexPath;
-(NSMutableArray *)batchContactIdentifiers;
-(CNContactStoreFilter *)filter;
@end

