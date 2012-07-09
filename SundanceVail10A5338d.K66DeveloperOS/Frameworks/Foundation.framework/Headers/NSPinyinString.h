/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSString.h"


@interface NSPinyinString : NSString {
	NSString *_string;	// 4 = 0x4
	unsigned _syllableCount;	// 8 = 0x8
	unsigned _score;	// 12 = 0xc
	unsigned _rangeCount;	// 16 = 0x10
	unsigned _replacementCount;	// 20 = 0x14
	unsigned _transpositionCount;	// 24 = 0x18
	unsigned _insertionCount;	// 28 = 0x1c
	unsigned _deletionCount;	// 32 = 0x20
	unsigned _firstModificationIndex;	// 36 = 0x24
	NSRange *_ranges;	// 40 = 0x28
	BOOL _lastSyllableIsPartial;	// 44 = 0x2c
}
@property(readonly, assign) BOOL lastSyllableIsPartial;	// G=0x373fb255; converted property
@property(readonly, assign) unsigned score;	// G=0x373fb265; converted property
@property(readonly, retain) NSString *string;	// G=0x373fb235; converted property
@property(readonly, assign) unsigned syllableCount;	// G=0x373fb245; converted property
+ (id)alternativesForInputString:(id)inputString;	// 0x373fb355
+ (id)prefixesForInputString:(id)inputString;	// 0x373fb395
- (id)initWithCoder:(id)coder;	// 0x373fafb9
- (id)initWithString:(id)string syllableCount:(unsigned)count lastSyllableIsPartial:(BOOL)partial score:(unsigned)score replacementCount:(unsigned)count5 transpositionCount:(unsigned)count6 insertionCount:(unsigned)count7 deletionCount:(unsigned)count8 indexOfFirstModification:(unsigned)firstModification rangeCount:(unsigned)count10 ranges:(NSRange *)ranges;	// 0x373fa425
- (id)initWithString:(id)string syllableCount:(unsigned)count lastSyllableIsPartial:(BOOL)partial score:(unsigned)score replacementCount:(unsigned)count5 transpositionCount:(unsigned)count6 insertionCount:(unsigned)count7 deletionCount:(unsigned)count8 rangeCount:(unsigned)count9 ranges:(NSRange *)ranges;	// 0x373fa52d
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x373fa401
- (Class)classForCoder;	// 0x373fb219
- (void)dealloc;	// 0x373fa571
- (id)description;	// 0x373fa941
- (void)encodeWithCoder:(id)coder;	// 0x373facf9
- (unsigned)hash;	// 0x373fa851
- (unsigned)indexOfFirstModification;	// 0x373fb2c5
- (BOOL)isEqual:(id)equal;	// 0x373fa5d5
// converted property getter: - (BOOL)lastSyllableIsPartial;	// 0x373fb255
- (unsigned)length;	// 0x373fa3e1
- (id)nonPinyinIndexSet;	// 0x373fa8a9
- (NSRange)nonPinyinRangeAtIndex:(unsigned)index;	// 0x373fb2d5
- (unsigned)numberOfDeletions;	// 0x373fb2b5
- (unsigned)numberOfInsertions;	// 0x373fb2a5
- (unsigned)numberOfNonPinyinRanges;	// 0x373fb275
- (unsigned)numberOfReplacements;	// 0x373fb285
- (unsigned)numberOfTranspositions;	// 0x373fb295
// converted property getter: - (unsigned)score;	// 0x373fb265
// converted property getter: - (id)string;	// 0x373fb235
// converted property getter: - (unsigned)syllableCount;	// 0x373fb245
@end
