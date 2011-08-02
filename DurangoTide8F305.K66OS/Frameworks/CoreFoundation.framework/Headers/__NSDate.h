/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSDate.h"


__attribute__((visibility("hidden")))
@interface __NSDate : NSDate {
@private
	double _time;	// 4 = 0x4
}
+ (id)__new:(double)aNew;	// 0x32e127bd
+ (id)allocWithZone:(NSZone *)zone;	// 0x32ea9fb5
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32ea9c75
- (id)initWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;	// 0x32ea9f81
- (void)dealloc;	// 0x32e12ea1
- (double)timeIntervalSinceReferenceDate;	// 0x32e12849
@end
