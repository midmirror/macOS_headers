//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SMWindowsCustomPath : NSObject
{
    BOOL _windowsPathRelativeToUserHome;
    BOOL _macPathRelativeToUserHome;
    NSString *_windowsPath;
    NSURL *_macPath;
    unsigned long long _size;
}

@property unsigned long long size; // @synthesize size=_size;
@property BOOL macPathRelativeToUserHome; // @synthesize macPathRelativeToUserHome=_macPathRelativeToUserHome;
@property(retain) NSURL *macPath; // @synthesize macPath=_macPath;
@property BOOL windowsPathRelativeToUserHome; // @synthesize windowsPathRelativeToUserHome=_windowsPathRelativeToUserHome;
@property(retain) NSString *windowsPath; // @synthesize windowsPath=_windowsPath;
- (void).cxx_destruct;
- (id)windowsPathForUser:(id)arg1;
- (id)description;
- (BOOL)isPerUser;

@end

