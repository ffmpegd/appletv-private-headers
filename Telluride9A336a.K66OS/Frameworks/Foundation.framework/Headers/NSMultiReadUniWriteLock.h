/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSLocking.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
@private
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x336d28fd; S=0x336d28bd; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x336d25ad
- (id)init;	// 0x336d25b5
- (void)dealloc;	// 0x336d2605
- (id)description;	// 0x336d27ed
- (void)finalize;	// 0x336d26a5
- (void)lock;	// 0x336d27a1
- (void)lockForReading;	// 0x336d272d
- (BOOL)lockForReadingBeforeDate:(id)readingBeforeDate;	// 0x336d2755
- (void)lockForWriting;	// 0x336d2759
- (BOOL)lockForWritingBeforeDate:(id)writingBeforeDate;	// 0x336d279d
// converted property getter: - (id)name;	// 0x336d28fd
// converted property setter: - (void)setName:(id)name;	// 0x336d28bd
- (BOOL)tryLockForReading;	// 0x336d273d
- (BOOL)tryLockForWriting;	// 0x336d2775
- (void)unlock;	// 0x336d27bd
@end

