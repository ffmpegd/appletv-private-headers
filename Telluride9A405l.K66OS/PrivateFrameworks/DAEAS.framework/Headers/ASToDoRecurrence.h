/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "ASRecurrence.h"

@class NSDate, NSNumber, ASToDo;

@interface ASToDoRecurrence : ASRecurrence <NSCoding> {
	ASToDo *_parentToDo;	// 80 = 0x50
	NSDate *_startTime;	// 84 = 0x54
	NSNumber *_regenerate;	// 88 = 0x58
	NSNumber *_deadOccur;	// 92 = 0x5c
}
@property(retain) NSNumber *deadOccur;	// G=0x341c1065; S=0x341c1079; @synthesize=_deadOccur
@property(retain) NSNumber *regenerate;	// G=0x341c102d; S=0x341c1041; @synthesize=_regenerate
@property(retain) NSDate *startTime;	// G=0x341c0ff5; S=0x341c1009; @synthesize=_startTime
+ (BOOL)acceptsTopLevelLeaves;	// 0x341bfa55
+ (BOOL)frontingBasicTypes;	// 0x341bfb51
+ (BOOL)notifyOfUnknownTokens;	// 0x341bfba5
+ (BOOL)parsingLeafNode;	// 0x341bfaa9
+ (BOOL)parsingWithSubItems;	// 0x341bfafd
- (id)initWithCalRecurrence:(void *)calRecurrence parentToDo:(id)aDo;	// 0x341bfbf9
- (id)initWithCoder:(id)coder;	// 0x341c0d75
- (BOOL)_requiresParentEvent;	// 0x341c055d
- (id)_transformedUntilDateForActiveSync:(id)activeSync;	// 0x341c0bf1
- (id)_untilDateForCalFrameworkWithParentStartDate:(id)parentStartDate;	// 0x341c0af9
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x341c0759
- (id)asParseRules;	// 0x341bfde1
// declared property getter: - (id)deadOccur;	// 0x341c1065
- (void)dealloc;	// 0x341c0d01
- (void)encodeWithCoder:(id)coder;	// 0x341c0ec9
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x341c0561
// declared property getter: - (id)regenerate;	// 0x341c102d
- (void)saveToCalendarWithParentASToDo:(id)aDo existingRecord:(void *)record shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge;	// 0x341bfd0d
// declared property setter: - (void)setDeadOccur:(id)occur;	// 0x341c1079
// declared property setter: - (void)setRegenerate:(id)regenerate;	// 0x341c1041
// declared property setter: - (void)setStartTime:(id)time;	// 0x341c1009
- (void)setStartTimeString:(id)string;	// 0x341c0a81
- (void)setUntilString:(id)string;	// 0x341c0abd
// declared property getter: - (id)startTime;	// 0x341c0ff5
@end

