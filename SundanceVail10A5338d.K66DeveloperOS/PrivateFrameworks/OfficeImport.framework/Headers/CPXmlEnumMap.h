/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface CPXmlEnumMap : NSObject {
	CFDictionaryRef mNameToValueMap;	// 4 = 0x4
}
- (id)initWithDescriptions:(const CPXmlEnumDescription *)descriptions;	// 0x33a8fc6d
- (void)dealloc;	// 0x33b51489
- (int)readFromNode:(xmlNode *)node ns:(const char *)ns name:(const char *)name;	// 0x33a8fd19
- (int)readFromNode:(xmlNode *)node ns:(const char *)ns name:(const char *)name def:(int)def;	// 0x33ab30a1
- (BOOL)readFromNode:(xmlNode *)node ns:(const char *)ns name:(const char *)name value:(int *)value;	// 0x33a8fd79
@end

