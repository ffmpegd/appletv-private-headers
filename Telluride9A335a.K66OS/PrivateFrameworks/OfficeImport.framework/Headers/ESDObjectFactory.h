/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface ESDObjectFactory : NSObject {
}
+ (EshObject *)createObjectWithType:(unsigned short)type;	// 0x351a3fad
+ (EshObject *)createObjectWithType:(unsigned short)type version:(unsigned short)version;	// 0x3520c1a9
+ (void)initialize;	// 0x351d25ed
+ (void)replaceHostEshFactoryWith:(EshObjectFactory *)with;	// 0x351fd2c9
+ (void)restoreHostEshFactory;	// 0x3520d3ed
+ (void)setEshFactory:(EshObjectFactory *)factory;	// 0x351d263d
@end

