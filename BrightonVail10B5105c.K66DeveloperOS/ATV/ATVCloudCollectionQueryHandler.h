/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCloudQueryHandler.h"
#import "ATVCloudCollectionQueryHandler.h"


@protocol ATVCloudCollectionQueryHandler
- (id)blankProperty;
- (Class)collectionClass;
- (id)countedPropertiesForATVProperties:(id)atvproperties;
- (unsigned)dmapResponseHeaderCode;
- (Class)entityClass;
- (id)foreignPersistentIDProperty;
- (id)mlPropertyForMLCountedProperty:(id)mlcountedProperty;
- (id)orderingPropertiesForProperty:(id)property;
@end

__attribute__((visibility("hidden")))
@interface ATVCloudCollectionQueryHandler : ATVCloudQueryHandler <ATVCloudCollectionQueryHandler> {
}
- (float)_durationOfAlbum:(unsigned long long)album;	// 0xdf449
- (void)_handleDAAPQuery:(id)query;	// 0xde831
- (void)_handleQuery:(id)query;	// 0xddcb1
- (id)_mlQueryForATVMediaQuery:(id)atvmediaQuery usingSections:(BOOL)sections;	// 0xddbcd
- (id)blankProperty;	// 0xddbb5
- (Class)collectionClass;	// 0xddbc9
- (id)countedPropertiesForATVProperties:(id)atvproperties;	// 0xddbb9
- (unsigned)dmapResponseHeaderCode;	// 0xddbc1
- (Class)entityClass;	// 0xddbc5
- (id)foreignPersistentIDProperty;	// 0xddbb1
- (void)handleQuery:(id)query withContext:(void *)context;	// 0xddb61
- (id)mlPropertyForMLCountedProperty:(id)mlcountedProperty;	// 0xddbbd
- (id)orderingPropertiesForProperty:(id)property;	// 0xddbad
@end
