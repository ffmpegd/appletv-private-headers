/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSLocking.h"
#import "Foundation-Structs.h"


@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x319de1dd; S=0x319de19d; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x319ddea9
- (id)init;	// 0x319ddeb1
- (void)dealloc;	// 0x319ddefd
- (id)description;	// 0x319de0d1
- (void)finalize;	// 0x319ddf99
- (void)lock;	// 0x319de089
- (void)lockForReading;	// 0x319de01d
- (BOOL)lockForReadingBeforeDate:(id)readingBeforeDate;	// 0x319de045
- (void)lockForWriting;	// 0x319de049
- (BOOL)lockForWritingBeforeDate:(id)writingBeforeDate;	// 0x319de085
// converted property getter: - (id)name;	// 0x319de1dd
// converted property setter: - (void)setName:(id)name;	// 0x319de19d
- (BOOL)tryLockForReading;	// 0x319de02d
- (BOOL)tryLockForWriting;	// 0x319de061
- (void)unlock;	// 0x319de0a1
@end
