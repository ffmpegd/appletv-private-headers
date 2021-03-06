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
@property(retain) id name;	// G=0x325931dd; S=0x3259319d; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x32592ea9
- (id)init;	// 0x32592eb1
- (void)dealloc;	// 0x32592efd
- (id)description;	// 0x325930d1
- (void)finalize;	// 0x32592f99
- (void)lock;	// 0x32593089
- (void)lockForReading;	// 0x3259301d
- (BOOL)lockForReadingBeforeDate:(id)readingBeforeDate;	// 0x32593045
- (void)lockForWriting;	// 0x32593049
- (BOOL)lockForWritingBeforeDate:(id)writingBeforeDate;	// 0x32593085
// converted property getter: - (id)name;	// 0x325931dd
// converted property setter: - (void)setName:(id)name;	// 0x3259319d
- (BOOL)tryLockForReading;	// 0x3259302d
- (BOOL)tryLockForWriting;	// 0x32593061
- (void)unlock;	// 0x325930a1
@end

