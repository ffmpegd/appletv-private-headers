/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMapTable;

__attribute__((visibility("hidden")))
@interface NSFileAccessNode : NSObject {
@private
	NSFileAccessNode *_parent;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	NSString *_normalizedName;	// 12 = 0xc
	NSFileAccessNode *_symbolicLinkDestination;	// 16 = 0x10
	unsigned _symbolicLinkReferenceCount;	// 20 = 0x14
	NSMapTable *_childrenByNormalizedName;	// 24 = 0x18
	id _presenterOrPresenters;	// 28 = 0x1c
	id _provider;	// 32 = 0x20
	id _accessClaimOrClaims;	// 36 = 0x24
	BOOL _isArbitrationBoundary;	// 40 = 0x28
	BOOL _isFilePackageIsFigured;	// 41 = 0x29
	BOOL _isFilePackage;	// 42 = 0x2a
	NSString *_lastRequestedChildName;	// 44 = 0x2c
	NSFileAccessNode *_lastRequestedChild;	// 48 = 0x30
}
@property(readonly, assign) BOOL isFilePackage;	// G=0x3375e2e1; converted property
- (id)initWithParent:(id)parent name:(id)name normalizedName:(id)name3;	// 0x3375d691
- (void)addAccessClaim:(id)claim;	// 0x3375f1f9
- (void)addPresenter:(id)presenter;	// 0x3375efdd
- (void)assertDead;	// 0x3375f535
- (void)assertDescendantsLive;	// 0x3375f615
- (void)assertLive;	// 0x3375f5a5
- (id)biggestFilePackageLocation;	// 0x3375e50d
- (id)childForRange:(NSRange)range ofPath:(id)path;	// 0x3375dd9d
- (void)dealloc;	// 0x3375d78d
- (id)descendantAtPath:(id)path componentRange:(NSRange)range create:(BOOL)create;	// 0x3375dc5d
- (id)descendantForFileURL:(id)fileURL;	// 0x3375df65
- (id)description;	// 0x3375fb89
- (id)descriptionWithIndenting:(id)indenting;	// 0x3375f689
- (void)forEachAccessClaimOnItemOrContainedItemPerformProcedure:(id)eachAccessClaimOnItemOrContainedItemPerformProcedure;	// 0x3375ed81
- (void)forEachAccessClaimOnItemPerformProcedure:(id)eachAccessClaimOnItemPerformProcedure;	// 0x3375e62d
- (void)forEachDescendantPerformProcedure:(id)eachDescendantPerformProcedure;	// 0x3375e555
- (void)forEachPresenterOfContainedItemPerformProcedure:(id)containedItemPerformProcedure;	// 0x3375eafd
- (void)forEachPresenterOfContainingFilePackagePerformProcedure:(id)containingFilePackagePerformProcedure;	// 0x3375e929
- (void)forEachPresenterOfContainingItemPerformProcedure:(id)containingItemPerformProcedure;	// 0x3375ece5
- (void)forEachPresenterOfItemOrContainedItemPerformProcedure:(id)itemOrContainedItemPerformProcedure;	// 0x3375ebdd
- (void)forEachPresenterOfItemOrContainingItemPerformProcedure:(id)itemOrContainingItemPerformProcedure;	// 0x3375ec11
- (void)forEachPresenterOfItemPerformProcedure:(id)itemPerformProcedure;	// 0x3375ea19
- (void)forEachReactorToItemOrContainedItemPerformProcedure:(id)itemOrContainedItemPerformProcedure;	// 0x3375e831
- (void)forEachRelevantAccessClaimPerformProcedure:(id)eachRelevantAccessClaimPerformProcedure;	// 0x3375e711
// converted property getter: - (BOOL)isFilePackage;	// 0x3375e2e1
- (BOOL)itemIsInItemAtLocation:(id)location;	// 0x3375efbd
- (BOOL)itemIsItemAtLocation:(id)location;	// 0x3375ef75
- (BOOL)itemIsSubarbitrable;	// 0x3375ef45
- (id)itemProvider;	// 0x3375e8fd
- (id)pathExceptPrivate;	// 0x3375f411
- (id)pathFromAncestor:(id)ancestor;	// 0x3375e109
- (id)pathToDescendantForFileURL:(id)fileURL componentRange:(NSRange *)range;	// 0x3375d879
- (void)removeAccessClaim:(id)claim;	// 0x3375f2d9
- (void)removeChildForNormalizedName:(id)normalizedName;	// 0x3375db1d
- (void)removePresenter:(id)presenter;	// 0x3375f0b9
- (void)removeSelfIfUseless;	// 0x3375dba1
- (void)setArbitrationBoundary;	// 0x3375ef31
- (void)setChild:(id)child forName:(id)name normalizedName:(id)name3;	// 0x3375d981
- (void)setParent:(id)parent name:(id)name;	// 0x3375e199
- (void)setProvider:(id)provider;	// 0x3375f189
- (void)setSymbolicLinkDestination:(id)destination;	// 0x3375d719
- (id)standardizedURL;	// 0x3375f4cd
- (id)url;	// 0x3375f3a9
@end

