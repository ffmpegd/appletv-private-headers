/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSSQLStoreMappingGenerator : NSObject {
@private
	NSMutableDictionary *_names;	// 4 = 0x4
}
+ (id)defaultMappingGenerator;	// 0x330be785
+ (void)invalidate;	// 0x3319bc61
- (id)init;	// 0x330c1351
- (void)dealloc;	// 0x330e53d1
- (id)generateTableName:(id)name;	// 0x330be7cd
- (id)newGeneratedPropertyName:(id)name;	// 0x330c1519
- (id)newUniqueNameWithBase:(unsigned short *)base withLength:(unsigned)length;	// 0x330c1611
- (id)uniqueNameWithBase:(id)base;	// 0x330ec041
@end

