//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreThemeDocument, NSThread;

@interface TDThreadMOCOrganizer : NSObject
{
    NSThread *mainThread;
    CoreThemeDocument *document;
}

- (id)initWithDocument:(id)arg1 mainThread:(id)arg2;
- (id)init;
- (id)threadMOC;
- (id)mainMOC;
- (id)document;
- (id)mainThread;
- (void)setThreadMOC:(id)arg1;

@end

