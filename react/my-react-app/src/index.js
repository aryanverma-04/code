import React from 'react';
import ReactDOM from 'react-dom/client';
import './index.css';
import App from './App';
import Lord from './Lord';
import From from './From';
function Car(props) {
  return <li>I am a { props.brand }</li>;
}

function Garage() {
  const cars = ['Ford', 'BMW', 'Audi'];
  return (
    <>
      <h1>Who lives in my garage?</h1>
      <ul>
        {cars.map((car) => <Car brand={car} />)}
      </ul>
    </>
  );
}
const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(
    <div>
      <From />
      <Garage />
      <App />
      <Lord />
    </div>
);

