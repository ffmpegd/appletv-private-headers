/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import "EDImmutableObject.h"
#import <NSObject.h> // Unknown library

@class NSString, EDRunsCollection, EDPhoneticInfo;

__attribute__((visibility("hidden")))
@interface EDString : NSObject <NSCopying, EDImmutableObject> {
@private
	NSString *mString;	// 4 = 0x4
	EDRunsCollection *mRuns;	// 8 = 0x8
	EDPhoneticInfo *mPhoneticInfo;	// 12 = 0xc
	bool mDoNotModify;	// 16 = 0x10
}
@property(retain) id phoneticInfo;	// G=0x32a1f3e1; S=0x3299ae29; converted property
@property(retain) id runs;	// G=0x32919cd1; S=0x32901fed; converted property
@property(retain) id string;	// G=0x328fa385; S=0x328f560d; converted property
+ (id)edStringWithString:(id)string;	// 0x328f554d
+ (id)edStringWithString:(id)string runs:(id)runs;	// 0x32a6f295
+ (id)string;	// 0x32a237a1
- (id)init;	// 0x328f55cd
- (id)initWithString:(id)string;	// 0x328f5599
- (id)initWithString:(id)string runs:(id)runs;	// 0x32a6f369
- (bool)areThereRuns;	// 0x329f0cd5
- (id)copyWithZone:(NSZone *)zone;	// 0x32a1f319
- (void)dealloc;	// 0x3290452d
- (id)firstRunFont;	// 0x32a83325
- (unsigned)hash;	// 0x32a6f2e5
- (bool)isEmpty;	// 0x3298d4c5
- (BOOL)isEqual:(id)equal;	// 0x328fa511
- (BOOL)isEqualToEDString:(id)edstring;	// 0x328fa5ad
- (BOOL)isEqualToString:(id)string;	// 0x32a6f341
// converted property getter: - (id)phoneticInfo;	// 0x32a1f3e1
// converted property getter: - (id)runs;	// 0x32919cd1
- (void)setDoNotModify:(bool)modify;	// 0x32901c91
// converted property setter: - (void)setPhoneticInfo:(id)info;	// 0x3299ae29
// converted property setter: - (void)setRuns:(id)runs;	// 0x32901fed
// converted property setter: - (void)setString:(id)string;	// 0x328f560d
// converted property getter: - (id)string;	// 0x328fa385
@end
