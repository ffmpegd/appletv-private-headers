/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASRecurrence.h"
#import "NSCoding.h"

@class NSNumber, NSDate, ASToDo;

@interface ASToDoRecurrence : ASRecurrence <NSCoding> {
	ASToDo *_parentToDo;	// 84 = 0x54
	NSDate *_startTime;	// 88 = 0x58
	NSNumber *_regenerate;	// 92 = 0x5c
	NSNumber *_deadOccur;	// 96 = 0x60
}
@property(retain) NSNumber *deadOccur;	// G=0x33bc57ad; S=0x33bc57c1; @synthesize=_deadOccur
@property(retain) NSNumber *regenerate;	// G=0x33bc5789; S=0x33bc579d; @synthesize=_regenerate
@property(retain) NSDate *startTime;	// G=0x33bc5765; S=0x33bc5779; @synthesize=_startTime
+ (BOOL)acceptsTopLevelLeaves;	// 0x33bc4189
+ (id)asParseRules;	// 0x33bc4515
+ (BOOL)frontingBasicTypes;	// 0x33bc4285
+ (BOOL)notifyOfUnknownTokens;	// 0x33bc42d9
+ (BOOL)parsingLeafNode;	// 0x33bc41dd
+ (BOOL)parsingWithSubItems;	// 0x33bc4231
- (id)initWithCalRecurrence:(void *)calRecurrence parentToDo:(id)aDo;	// 0x33bc432d
- (id)initWithCoder:(id)coder;	// 0x33bc54e5
- (BOOL)_requiresParentEvent;	// 0x33bc4c35
- (id)_transformedUntilDateForActiveSync:(id)activeSync;	// 0x33bc535d
- (id)_untilDateForCalFrameworkWithParentStartDate:(id)parentStartDate;	// 0x33bc523d
- (void)appendActiveSyncDataForTask:(id)task toWBXMLData:(id)wbxmldata;	// 0x33bc4e35
// declared property getter: - (id)deadOccur;	// 0x33bc57ad
- (void)dealloc;	// 0x33bc546d
- (void)encodeWithCoder:(id)coder;	// 0x33bc5639
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x33bc4c39
// declared property getter: - (id)regenerate;	// 0x33bc5789
- (void)saveToCalendarWithParentASToDo:(id)aDo existingRecord:(void *)record shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge;	// 0x33bc4441
// declared property setter: - (void)setDeadOccur:(id)occur;	// 0x33bc57c1
// declared property setter: - (void)setRegenerate:(id)regenerate;	// 0x33bc579d
// declared property setter: - (void)setStartTime:(id)time;	// 0x33bc5779
- (void)setStartTimeString:(id)string;	// 0x33bc51c5
- (void)setUntilString:(id)string;	// 0x33bc5201
// declared property getter: - (id)startTime;	// 0x33bc5765
@end

