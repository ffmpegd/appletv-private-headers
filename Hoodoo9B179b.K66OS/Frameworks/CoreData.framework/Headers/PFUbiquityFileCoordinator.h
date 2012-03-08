/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSFileCoordinator.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PFUbiquityFileCoordinator : NSFileCoordinator {
}
+ (void)destroyFilePresenterForUbiquityRootPath:(id)ubiquityRootPath;	// 0x32c0b59d
+ (void)initialize;	// 0x32c0b521
+ (id)newFileCoordinatorForUbiquitizedStore:(id)ubiquitizedStore;	// 0x32c0b865
+ (id)newFileCoordinatorForUbiquitousExternalDataReferenceLocation:(id)ubiquitousExternalDataReferenceLocation;	// 0x32c0b695
+ (id)newFileCoordinatorForUbiquityRootPath:(id)ubiquityRootPath;	// 0x32c0b6c9
- (void)coordinateReadingItemAtURL:(id)url options:(unsigned)options retryOnError:(BOOL)error error:(id *)error4 byAccessor:(id)accessor;	// 0x32c0b8fd
@end
