# Activities

Activity is an important component of Android application. It describes the logic behind the interaction of users and user interface. Each activity is a independent window shown on screen when it is activited. There is a special activity called Main activity which we can define in Manifest file is the entry point of the whole application and when we click the icon on Home screen of system. All activities can be activated by an special object called Intent which will be introduce later.

An activity has its own liftcycle each time it is launched. In Android SDK, it defines six callback in Activety class representing instructions that need to be executed in different state: onCreat(), onStart(), onResume(), onPause(), onStop() and onDestory(). In the underlying code, the priority of interaction between activities in different states and the system is also defined. For example, the activity which is in state Paused, Stopped or Destroyed has a higher probability of being killed and removing from the memory 

![](https://developer.android.com/guide/components/images/activity_lifecycle.png) 

As we mention before, Activity define the interaction betwwen user and user interface by load a layout file in XML format. Developer can declare differernt view on it, like button, image or view group. We can assign a unique ID (android:id) to each view so that we can creat an instance of a view and capture it in activity or other components.

## User Interface

Android SDK provides a variety of ways to compose the user interface.