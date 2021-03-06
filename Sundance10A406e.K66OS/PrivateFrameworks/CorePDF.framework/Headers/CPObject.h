/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library
#import "CorePDF-Structs.h"
#import "NSCopying.h"
#import "CPCopying.h"

@class NSMutableArray, CPPage, CPDocument;

@interface CPObject : NSObject <NSCopying, CPCopying> {
	CPObject *parent;	// 4 = 0x4
	NSMutableArray *children;	// 8 = 0x8
	CPDocument *document;	// 12 = 0xc
	CPPage *page;	// 16 = 0x10
	long zOrder;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *children;	// G=0x32abd805; converted property
@property(retain) CPDocument *document;	// G=0x32abde09; S=0x32abdd85; converted property
@property(retain) CPPage *page;	// G=0x32abe081; S=0x32abe071; converted property
@property(retain) CPObject *parent;	// G=0x32abc581; S=0x32abc571; converted property
@property(assign) long zOrder;	// G=0x32abde19; S=0x32abdf1d; converted property
- (id)init;	// 0x32abbecd
- (id)initSuper;	// 0x32abbf51
- (void)accept:(id)accept;	// 0x32abdd35
- (void)add:(id)add;	// 0x32abc909
- (void)add:(id)add atIndex:(unsigned)index;	// 0x32abcaa5
- (void)addChildren:(id)children;	// 0x32abccdd
- (void)addChildrenOf:(id)of;	// 0x32abce01
- (id)ancestorOfClass:(Class)aClass;	// 0x32abd255
- (id)childAtIndex:(unsigned)index;	// 0x32abc639
// converted property getter: - (id)children;	// 0x32abd805
- (id)childrenNotOfClass:(Class)aClass;	// 0x32abd3fd
- (id)childrenOfClass:(Class)aClass;	// 0x32abd341
- (void)childrenOfClass:(Class)aClass into:(id)into;	// 0x32abd2a9
- (void)clearCachedInfo;	// 0x32abdf2d
- (id)copyAndSplitChildrenAtIndex:(unsigned)index;	// 0x32abc271
- (id)copyWithZone:(NSZone *)zone;	// 0x32abc0dd
- (id)copyWithoutChildren;	// 0x32abc241
- (unsigned)count;	// 0x32abc591
- (unsigned)countOfClass:(Class)aClass;	// 0x32abc5b1
- (unsigned)countOfFirstDescendantsOfClass:(Class)aClass;	// 0x32abdc5d
- (void)dealloc;	// 0x32abbf7d
- (int)depth;	// 0x32abe0f9
- (id)descendantsOfClass:(Class)aClass;	// 0x32abd9c1
- (id)descendantsOfClass:(Class)aClass deep:(BOOL)deep;	// 0x32abd815
- (id)descendantsOfClass:(Class)aClass omitTraversing:(Class)traversing;	// 0x32abd9e9
- (void)descendantsOfClass:(Class)aClass to:(id)to;	// 0x32abd91d
- (void)disposeDescendants;	// 0x32abc029
// converted property getter: - (id)document;	// 0x32abde09
- (id)firstChild;	// 0x32abc715
- (id)firstDescendantOfClass:(Class)aClass;	// 0x32abdb25
- (id)firstDescendantsOfClass:(Class)aClass;	// 0x32abdf51
- (id)firstSibling;	// 0x32abc8b9
- (unsigned)indexOf:(id)of;	// 0x32abdd39
- (BOOL)isEqual:(id)equal;	// 0x32abdd59
- (id)lastChild;	// 0x32abc759
- (id)lastDescendantOfClass:(Class)aClass;	// 0x32abdbc9
- (id)lastSibling;	// 0x32abc86d
- (void)map:(SEL)map target:(id)target;	// 0x32abd719
- (void)map:(SEL)map target:(id)target childrenOfClass:(Class)aClass;	// 0x32abd575
- (void)map:(SEL)map target:(id)target childrenOfClass:(Class)aClass last:(BOOL)last;	// 0x32abd4d9
- (void)map:(SEL)map target:(id)target last:(BOOL)last;	// 0x32abd785
- (void)mapSafely:(SEL)safely target:(id)target childrenOfClass:(Class)aClass;	// 0x32abd5f9
- (id)newTakeChildren;	// 0x32abc379
- (id)newTakeChildrenAmong:(id)among;	// 0x32abc431
- (id)nextSibling;	// 0x32abc791
// converted property getter: - (id)page;	// 0x32abe081
// converted property getter: - (id)parent;	// 0x32abc581
- (void)performSelector:(SEL)selector;	// 0x32abd4b9
- (id)previousSibling;	// 0x32abc809
- (void)promoteChildren;	// 0x32abd195
- (void)recomputeZOrder;	// 0x32abde29
- (void)remove;	// 0x32abd045
- (void)remove:(id)remove;	// 0x32abcec5
- (void)removeAll;	// 0x32abd15d
- (void)removeFirstChild;	// 0x32abcf99
- (void)removeLastChild;	// 0x32abcff1
- (void)removeObjectAtIndex:(unsigned)index;	// 0x32abd06d
// converted property setter: - (void)setDocument:(id)document;	// 0x32abdd85
// converted property setter: - (void)setPage:(id)page;	// 0x32abe071
// converted property setter: - (void)setParent:(id)parent;	// 0x32abc571
// converted property setter: - (void)setZOrder:(long)order;	// 0x32abdf1d
- (id)shallowDescendantsOfClass:(Class)aClass;	// 0x32abd9d5
- (void)updateZOrder:(long)order;	// 0x32abdedd
// converted property getter: - (long)zOrder;	// 0x32abde19
@end

