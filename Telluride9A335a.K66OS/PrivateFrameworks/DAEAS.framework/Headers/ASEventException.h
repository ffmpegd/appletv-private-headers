/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASEvent.h"
#import "NSCoding.h"
#import "ASParsingAcceptingTopLevelLeaves.h"

@class NSMutableDictionary, NSDate, NSNumber;

@interface ASEventException : ASEvent <ASParsingAcceptingTopLevelLeaves, NSCoding> {
	NSNumber *_isDeleted;	// 172 = 0xac
	NSDate *_exceptionStartTime;	// 176 = 0xb0
	NSMutableDictionary *_placeHolder;	// 180 = 0xb4
	ASEvent *_originalEvent;	// 184 = 0xb8
}
@property(retain) id exceptionDate;	// G=0x321c1149; S=0x321c1159; converted property
@property(retain) NSDate *exceptionStartTime;	// G=0x321c14f9; S=0x321c1531; converted property
@property(retain) NSNumber *isDeleted;	// G=0x321c147d; S=0x321c14b5; converted property
@property(retain) ASEvent *originalEvent;	// G=0x321c145d; S=0x321c146d; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x321bf46d
+ (BOOL)frontingBasicTypes;	// 0x321bf569
+ (BOOL)notifyOfUnknownTokens;	// 0x321bf5bd
+ (BOOL)parsingLeafNode;	// 0x321bf4c1
+ (BOOL)parsingWithSubItems;	// 0x321bf515
- (id)initWithCalEvent:(void *)calEvent originalEvent:(id)event account:(id)account;	// 0x321c0a69
- (id)initWithCoder:(id)coder;	// 0x321c1169
- (id)initWithExceptionStartTime:(id)exceptionStartTime;	// 0x321c0be9
- (void)_loadAttributesFromCalEvent:(void *)calEvent withKnownExceptionDate:(id)knownExceptionDate forAccount:(id)account;	// 0x321c09dd
- (id)_transformedExceptionStartDateForActiveSync:(id)activeSync;	// 0x321bfcd9
- (id)_transformedExceptionStartDateForCalFramework:(id)calFramework;	// 0x321bfc89
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x321c0c85
- (void)applyPlaceHolder;	// 0x321bf611
- (id)asParseRules;	// 0x321bf6cd
- (void)clearPlaceHolder;	// 0x321bf631
- (void)dealloc;	// 0x321c10d5
- (BOOL)deleteFromCalendar;	// 0x321c0c65
- (id)description;	// 0x321c1025
- (void)encodeWithCoder:(id)coder;	// 0x321c1295
// converted property getter: - (id)exceptionDate;	// 0x321c1149
// converted property getter: - (id)exceptionStartTime;	// 0x321c14f9
- (BOOL)hasOccurrenceInTheFuture;	// 0x321c13a1
// converted property getter: - (id)isDeleted;	// 0x321c147d
- (void)loadClientIDs;	// 0x321c0fc5
// converted property getter: - (id)originalEvent;	// 0x321c145d
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x321bfc0d
- (void)postProcessApplicationData;	// 0x321c00a1
- (void)saveToCalendarWithParentASEvent:(id)parentASEvent existingRecord:(void *)record intoCalendar:(void *)calendar shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x321bff59
- (id)serverIdForCalFrameworkWithParentEvent:(id)parentEvent;	// 0x321bfd41
// converted property setter: - (void)setExceptionDate:(id)date;	// 0x321c1159
// converted property setter: - (void)setExceptionStartTime:(id)time;	// 0x321c1531
// converted property setter: - (void)setIsDeleted:(id)deleted;	// 0x321c14b5
- (void)setObject:(id)object forDCCPT:(int)dccpt;	// 0x321bf65d
// converted property setter: - (void)setOriginalEvent:(id)event;	// 0x321c146d
- (void)takeValuesFromParentForAccount:(id)account;	// 0x321c03e5
- (id)uidGeneratedIfNecessaryWithLocalEvent:(void *)localEvent;	// 0x321c0259
- (BOOL)verifyExternalIds;	// 0x321bfdbd
@end

