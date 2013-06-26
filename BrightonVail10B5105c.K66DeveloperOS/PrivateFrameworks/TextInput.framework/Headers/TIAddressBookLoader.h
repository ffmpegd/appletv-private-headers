/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <NSObject.h> // Unknown library

@protocol TIAddressBookLoadable;

@interface TIAddressBookLoader : NSObject {
	id<TIAddressBookLoadable> _delegate;	// 4 = 0x4
}
@property(assign, nonatomic) id<TIAddressBookLoadable> delegate;	// G=0x334c89e1; S=0x334c89f1; @synthesize=_delegate
+ (id)addressBookLoaderWithDelegate:(id)delegate;	// 0x334c8651
- (id)initWithDelegate:(id)delegate;	// 0x334c868d
- (void)addressBookChanged:(id)changed;	// 0x334c89d1
- (void)dealloc;	// 0x334c8731
// declared property getter: - (id)delegate;	// 0x334c89e1
- (void)loadAddressBook;	// 0x334c878d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x334c89f1
@end
