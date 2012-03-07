/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSPropertyListSerialization : NSObject {
	void *reserved[6];	// 4 = 0x4
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x3209a3f5
+ (id)dataFromPropertyList:(id)propertyList format:(unsigned)format errorDescription:(out id *)description;	// 0x32012ee1
+ (id)dataWithPropertyList:(id)propertyList format:(unsigned)format options:(unsigned)options error:(out id *)error;	// 0x3202ad31
+ (BOOL)propertyList:(id)list isValidForFormat:(unsigned)format;	// 0x3209a3e5
+ (id)propertyListFromData:(id)data mutabilityOption:(unsigned)option format:(unsigned *)format errorDescription:(out id *)description;	// 0x3200874d
+ (id)propertyListWithData:(id)data options:(unsigned)options format:(unsigned *)format error:(out id *)error;	// 0x3201dfb9
+ (id)propertyListWithStream:(id)stream options:(unsigned)options format:(unsigned *)format error:(out id *)error;	// 0x3209a57d
+ (int)writePropertyList:(id)list toStream:(id)stream format:(unsigned)format options:(unsigned)options error:(out id *)error;	// 0x3209a485
- (id)init;	// 0x3209a43d
@end

