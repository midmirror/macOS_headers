//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSCopying-Protocol.h>

@class NSAppleEventDescriptor, NSArray, NSDictionary;

@interface NSWorkspaceOpenConfiguration : NSObject <NSCopying>
{
    BOOL _promptsUserIfNeeded;
    BOOL _addsToRecentItems;
    BOOL _activates;
    BOOL _hides;
    BOOL _hidesOthers;
    BOOL _forPrinting;
    BOOL _createsNewApplicationInstance;
    BOOL _requiresUniversalLinks;
    int _architecture;
    NSArray *_arguments;
    NSDictionary *_environment;
    NSAppleEventDescriptor *_appleEvent;
}

+ (id)configuration;
@property BOOL requiresUniversalLinks; // @synthesize requiresUniversalLinks=_requiresUniversalLinks;
@property int architecture; // @synthesize architecture=_architecture;
@property(retain) NSAppleEventDescriptor *appleEvent; // @synthesize appleEvent=_appleEvent;
@property(copy) NSDictionary *environment; // @synthesize environment=_environment;
@property(copy) NSArray *arguments; // @synthesize arguments=_arguments;
@property BOOL createsNewApplicationInstance; // @synthesize createsNewApplicationInstance=_createsNewApplicationInstance;
@property(getter=isForPrinting) BOOL forPrinting; // @synthesize forPrinting=_forPrinting;
@property BOOL hidesOthers; // @synthesize hidesOthers=_hidesOthers;
@property BOOL hides; // @synthesize hides=_hides;
@property BOOL activates; // @synthesize activates=_activates;
@property BOOL addsToRecentItems; // @synthesize addsToRecentItems=_addsToRecentItems;
@property BOOL promptsUserIfNeeded; // @synthesize promptsUserIfNeeded=_promptsUserIfNeeded;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

