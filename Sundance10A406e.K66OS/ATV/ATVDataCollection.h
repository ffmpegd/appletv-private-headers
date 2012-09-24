/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDataBaseItem.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, ATVDataClient;

__attribute__((visibility("hidden")))
@interface ATVDataCollection : XXUnknownSuperclass <ATVDataBaseItem> {
	NSMutableDictionary *_metadataDict;	// 4 = 0x4
	ATVDataClient *_dataClient;	// 8 = 0x8
}
@property(assign) __weak ATVDataClient *dataClient;	// G=0xc8e99; S=0xc8eb9; @synthesize=_dataClient
@property(retain) NSMutableDictionary *metadataDict;	// G=0xc8e75; S=0xc8e89; @synthesize=_metadataDict
- (id)initWithDataClient:(id)dataClient;	// 0xc8b59
- (void).cxx_destruct;	// 0xc8ecd
- (id)concreteValueForProperty:(id)property;	// 0xc8e71
// declared property getter: - (id)dataClient;	// 0xc8e99
- (id)description;	// 0xc8ced
- (unsigned)hash;	// 0xc8c75
- (BOOL)isDataItem;	// 0xc8e6d
- (BOOL)isEqual:(id)equal;	// 0xc8bb9
// declared property getter: - (id)metadataDict;	// 0xc8e75
- (id)objectForKey:(id)key;	// 0xc8e4d
// declared property setter: - (void)setDataClient:(id)client;	// 0xc8eb9
// declared property setter: - (void)setMetadataDict:(id)dict;	// 0xc8e89
- (void)setObject:(id)object forKey:(id)key;	// 0xc8d81
- (id)valueForProperty:(id)property;	// 0xc8d1d
@end
