/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQDWPPageMaster : NSObject <GQDNameMappable> {
@private
	CFStringRef mHeaderIdentifier;	// 4 = 0x4
	CFStringRef mFooterIdentifier;	// 8 = 0x8
}
+ (const StateSpec *)stateForReading;	// 0x34284109
- (void)dealloc;	// 0x34284135
- (CFStringRef)footerIdentifier;	// 0x342840f9
- (CFStringRef)headerIdentifier;	// 0x342840e9
@end

